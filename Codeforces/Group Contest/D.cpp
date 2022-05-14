#include <bits/stdc++.h>

using namespace std;

void solve(int N){
    int l;
    if (N == 1){
        l = (int)pow(10, N - 2);
    }else{
        l = (int)pow(10, N - 1);
    }
    int r = (int)pow(10, N) - 1;
 
    int count = 0;
    for(int i = l; i <= r; i++){
        int xorr = 0, temp = i;
 
        while (temp > 0) {
            xorr = xorr ^ (temp % 10);
            temp /= 10;
        }

        if (xorr <= 9){
            count++;
        }
    }
     
    cout << count;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int N;

    cin >> N;

    solve(N);

    return 0;
}
