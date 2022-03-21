#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    /*
     * 2 Arrays of integers
     * sorted non-decreasing
     * is it possible to choose K in A and M in B that everyelements in a < in B
    */

    int na, nb, k, m;
    cin >> na >> nb;    // sizes of A and B
    cin >> k >> m;

    vector<int> a(na);  // elements of array A
    for (int i = 0; i < na; i++){
        cin >> a[i];
    }

    vector<int> b(nb);  // elements of array B
    for (int j = 0; j < nb; j++){
        cin >> b[j];
    }

    // in this problem, we need to choose k elements from A and M elements from B
    // that each in K less than each in M => if it is possible then K smallest in A
    // is less than M largest in B

    if (a[k-1] < b[nb-m]){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
