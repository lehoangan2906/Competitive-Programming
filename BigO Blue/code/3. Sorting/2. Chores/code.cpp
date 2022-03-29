

#include <bits/stdc++.h>

using namespace std;

#define ll long long

int solve(vector<int>& input, int a, int b){
    sort(input.begin(), input.end());

    return (input[b] - input[b - 1]);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, b;
    cin >> n >> a >> b;
    vector<int> cpx(n);

    for(int i = 0; i < n; i++){
        cin >> cpx[i];
    }
    
    cout << solve(cpx, a, b);

    return 0;

}
