#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    ll n, m;
    ll i, j, cnt, ans = 0;
    
    while (cin >> n >> m){

        // initialize array a and b
        ll a[n + 1], b[m + 1];

        for (i = 0; i < n; i++){
            cin >> a[i];
        }

        for (j = 0; j < m; j++){
            cin >> b[j];
        }

        j = 0, cnt = 0;

        for (i = 0; i < n; i++){
            while(j < m){
                if (b[j] >= a[i]){
                    cnt++;
                    i++;
                }
                j++;
            }
        }
        cout << max(ans, n - cnt) << endl;
    }

    return 0;
}
