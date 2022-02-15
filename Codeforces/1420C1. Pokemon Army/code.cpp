/*
   This is the easy version of the problem. The difference between the versions is that the easy version has no swap operations. You can make hacks only if all versions of the problem are solved.

Pikachu is a cute and friendly pokémon living in the wild pikachu herd.

But it has become known recently that infamous team R wanted to steal all these pokémon! Pokémon trainer Andrew decided to help Pikachu to build a pokémon army to resist.

First, Andrew counted all the pokémon — there were exactly 𝑛 pikachu. The strength of the 𝑖-th pokémon is equal to 𝑎𝑖, and all these numbers are distinct.

As an army, Andrew can choose any non-empty subsequence of pokemons. In other words, Andrew chooses some array 𝑏 from 𝑘 indices such that 1≤𝑏1<𝑏2<⋯<𝑏𝑘≤𝑛, and his army will consist of pokémons with forces 𝑎𝑏1,𝑎𝑏2,…,𝑎𝑏𝑘.

The strength of the army is equal to the alternating sum of elements of the subsequence; that is, 𝑎𝑏1−𝑎𝑏2+𝑎𝑏3−𝑎𝑏4+….

Andrew is experimenting with pokémon order. He performs 𝑞 operations. In 𝑖-th operation Andrew swaps 𝑙𝑖-th and 𝑟𝑖-th pokémon.

Note: 𝑞=0 in this version of the task.

Andrew wants to know the maximal stregth of the army he can achieve with the initial pokémon placement. He also needs to know the maximal strength after each operation.

Help Andrew and the pokémon, or team R will realize their tricky plan!

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        int n, q;
        cin >> n >> q;
        assert(q == 0);
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        // maximize a[b[1]] - a[b[2]] + a[b[3]] - a[b[4]] + ...
        // maximize a[b[1]] - (a[b[2]] - a[b[3]] + a[b[4]] - a[b[5]] + ...)
        
        vector<long long> mx(n + 1);
        vector<long long> mn(n + 1);

        // mx[i] and mn[i] == max and min strength of a team chosen from a[i], a[i + 1], ..., a[n - 1]
        for (int i = n - 1; i >= 0; i--){\
            mx[i] = max(mx[i + 1], a[i] - mn[i + 1]);
            mn[i] = min(mn[i + 1], a[i] - mx[i + 1]);
        }
        cout << mx[0] << '\n';
    }
    return 0;
}
