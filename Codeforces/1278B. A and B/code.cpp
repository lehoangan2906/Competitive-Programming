#include <bits/stdc++.h>

/*
    You are given two integers a and b. You can perform a sequence of operations:
    during the first operation you choose one of these numbers and increase it by 1
    during the second operation you choose one of these numbers and increase it by 2, and so on
    You choose the number of these operations yourself.

    For example, if 𝑎=1 and 𝑏=3, you can perform the following sequence of three operations:

    - add 1 to 𝑎, then 𝑎=2 and 𝑏=3;
    - add 2 to 𝑏, then 𝑎=2 and 𝑏=5;
    - add 3 to 𝑎, then 𝑎=5 and 𝑏=5.
    
    Calculate the minimum number of operations required to make 𝑎 and 𝑏 equal.
*/

using namespace std;

#define ll long long
#define ar array

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        int a, b;   
        cin >> a >> b;

        if (a > b){
            swap(a, b);
        }

        int x = 0, pd = (a^b)&1;
        while (a < b || pd){
            ++x;
            a += x;
            pd^=x&1;
        }
        cout << x << "\n";
    }

    return 0;
}
