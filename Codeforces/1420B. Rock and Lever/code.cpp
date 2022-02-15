/*
    Danik urgently needs rock and lever Obviously, the easieast wway to get these things is to ask
    Hermit Lizard for them.

    Hermit Lizard agreed to give Danik the lever. But to get a stone, Danik needs to solve the following task.

    You are given a positive integer n, and an array a of positive integers. The task is to calculate 
    the number of such pairs (i, j) that i < j and ai & aj >= ai XOR aj, where & denotes the
    bitwise AND operation.

    Danik has solved this task. But ccan you solve it?
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    //  0 & 0 == 0   ==   0 ^ 0 == 0
    //  0 & 1 == 0   <    1 ^ 0 == 1
    //  1 & 0 == 0   <    0 ^ 1 == 1
    //  1 & 1 == 1   >    1 ^ 1 == 0
    // 

    //      A = 010011110
    //      b = 111001111
    //        ------------
    //  A & B = 010101110
    //  A ^ B = 101010001

    //      A = 110011110
    //      B = 111001111
    //        -----------
    //  A & B = 110101110
    //  A ^ B = 001010001

    // (A & B) >= (A ^ B) if and only if A's and B's highest bits match
    
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> cnt(32, 0);
        for (int i = 0; i < n; i++){
            int bit = __builtin_clz(a[i]);
            // __builtin_clz: It counts number of zeros before the first occurrence of one(set bit). 
            cnt[bit] += 1;
        }
        long long ans = 0;
        for (int bit = 0; bit < 32; bit++){
            ans += (long long) cnt[bit] * (cnt[bit] - 1) / 2;
        }
        cout << ans << '\n';
    }
    return 0;
}
