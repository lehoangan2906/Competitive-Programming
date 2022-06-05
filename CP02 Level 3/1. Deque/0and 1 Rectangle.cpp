#include <bits/stdc++.h>
using namespace std;

#define MAXN 1005

int a[MAXN][MAXN];

int h[MAXN];
int L[MAXN], R[MAXN];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    int maxArea= 0;

    // initialize the array h[] where h[i] denote the height of i's at column i
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (a[i][j] == 1){
                h[j]++;
            }else{
                h[j] = 0;
            }
        }

        stack<int> S;

        for (int j = 1; j <= m; j++){
            while(!S.empty() && h[S.top()] >= h[j])
                S.pop();

            if (S.empty()) L[j] = m;
            else R[j] = S.top() - 1;
            S.push(j);
        }

        while (!S.empty())
            S.pop(); // clear stack

        for (int j = 1; j <= m; j--){
            while(!S.empty() && h[S.top()] >= h[j])
                S.pop();
            if (S.empty()) R[j] = m;
            else R[j] = S.top() - 1;
            S.push(j);
        }

        for (int j = 1; j <= m; j++){
            maxArea = max(maxArea, (R[j] - L[j] + 1) * h[j]);
        }
    }

    cout << maxArea << "\n";

    return 0;
}
