#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define s second
#define f first
using namespace std;

int dragonstrength, bonus, strength, numberofdragon;
    vector<pair<int , int> > v;

int main(){
    
    cin >> strength >> numberofdragon; 

    // create a vector of pair contains dragon's strength and bonus
    for (int i = 0; i < numberofdragon; i++){
        cin >> dragonstrength >> bonus;
        v.pb(mp(dragonstrength, bonus));
    }

    sort(v.begin(), v.end());

    // 
    for (int i = 0; i < numberofdragon; i++){
        if (strength <= v[i].f){
            cout << "NO";               // Because Kirito can fight the dragons in any order, so if he stuck with one of these dragon, game comes to an end
            return 0;
        } else strength += v[i].s;
    }
    cout << "YES";
}