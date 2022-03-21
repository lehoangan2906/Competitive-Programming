// permutation if
//  -- contains each number once
//  
//  Original permutation: p1, p2, ..., pn       length n
//  New permutation: q1, q2, .., qn-1           length n-1
//
//   qi = pi+1 - pi

#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc1(num);

    ll arr[num + 5], ans[num + 5];

    memset(ans, 0, sizeof(ans));
    memset(arr, 0, sizeof(arr));

    ll mi = INT_MAX;
    for(ll i = 2; i <= num; i++){
        sc1(arr[i]);
        arr[i] = arr[i - 1] + arr[i];
        mi = min(mi, arr[i]);
    }

    if(mi < 0) mi = abs(mi) + 1;

    for(ll i = 1; i <= num; i++){
        arr[i] += mi;
        ans[i] = arr[i];
    }

    sort(ans, ans + num + 1);

    for(ll i = 1; i <= num; i++){
        if(ans[i] != i) return cout << "-1" << endl,0;
    }

    for(ll i = 1; i <= num; i++){
        cout << arr[i];
        cout << ((i < num) ? " " : "\n");
    }

    return 0;
}