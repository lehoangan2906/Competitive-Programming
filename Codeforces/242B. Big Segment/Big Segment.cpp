#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int n;  // number of segments
    cin >> n;

    int arrl [n], arrr [n], lmin, rmax, pos;
    for (int i = 0; i < n; i++){
        int l, r;
        cin >> l >> r;
        arrl[i] = l;
        arrr[i] = r;
    }
    
    lmin = *min_element(arrl, arrl + n), rmax = *max_element(arrr, arrr + n);
    bool check = 0;
    for (int j = 0; j < n; j++){
        if (arrl[j] == lmin && arrr[j] == rmax){
            check = 1;
            pos = j + 1;
        }
    }

    if (check == 1){
        cout << pos;
    }else{
        cout << -1;
    }

    return 0;
}
