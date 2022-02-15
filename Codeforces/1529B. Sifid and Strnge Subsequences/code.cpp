/* It's easy to prove that a strange subsequence can't contain more than one positive element.

So it's optimal to pick all of the non-positive elements, now we can pick at most one positive element.

Assume 𝑥 is the minimum positive element in the array. We can pick 𝑥 if no two elements in the already picked set such as 𝑎 and 𝑏 exist in a way that |𝑎−𝑏|<𝑥.

To check this, we just have to sort the already picked elements and see the difference between adjacent pairs.
*/

#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9 + 10;     // ~ 1*10^-9 + 10
const int  xn = 1e5 + 10;     // ~ 1*10^-5 + 10
int qq, n, a[xn], ans, mn;
bool flag;

int main(){
    ios::sync_with_stdio (0);cin.tie(0);cout.tie(0);

    cin >> qq;                               // number of test cases
    while(qq--){
        cin >> n;  // legth of array a
        ans = 0;

        for (int i = 1; i<= n; ++i){             // loop through array a
            cin >> a[i], ans += (a[i] <= 0);     // take element a[i]
        }

        sort(a + 1, a + n + 1);                 // sort from the second element in the array up to element n+1
        mn = inf;

        for (int i = 1; i <= n; ++i){            // loop through array a
            if(a[i] > 0){                      
                mn = min(mn, a[i]);             // set mn  to the mim value of mn and a[i] if a[i] is positive
            }
        }

        flag = (mn < inf);                     // if mn < 1e9 + 10 then mark it 

        for (int i = 2; i <= n; ++i){
            if(a[i] <= 0){
                flag &= (a[i] - a[i - 1] >= mn);
            }
        }

        if (flag){
            cout << ans + 1 << endl;        //length of longest strange subsequent 
        }

        else{
            cout << ans << endl;            // length of longest strange subsequent
        }
    }

    return 0;
}