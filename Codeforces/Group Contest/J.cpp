#include<bits/stdc++.h>

using namespace std;
 
int mod = 1000000007;

int LS(int n){
    return (n * (n + 1) / 2) % mod;
}

int RS(int b, int a){
    return (LS(b) - LS(a)) % mod;
}
 
int solve(int n){

    int res = 0;
    int i = 1;
  
    while(true){
        res += RS(n / i, n / (i + 1)) * (i % mod) % mod;
        res %= mod;
        if (i == n)
            break;  
        i = n / (n / (i + 1));
    }
    return res;
}       
  
int main(){
    int N;
    cin >> N;

    cout << solve(N) << endl;

    return 0;
}
 