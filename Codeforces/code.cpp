#include <bits/stdc++.h>
using namespace std;

int main(){
    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // input
    int t;  // number of test cases
    cin >> t;
    while (t--){
        vector<int> a(4);  // array
        for (int i = 0; i < 4; i++) cin >> a[i];

        if (a[0] < a[2] < a[1] < a[4]) cout << a[2] << "\n";
        else if (a[2] < a[0] < a[3] < a[1]) cout << a[0] << "\n";
        else if (a[0] <= a[2] <= a[3] <= a[1]) cout << a[2] << "\n";
        else if (a[2] <= a[0] <= a[1] <= a[3]) cout << a[0] << "\n";
        else if (a[0] <= a[1] <= a[2] && a[3] == a[2]) cout << a[0] + a[3]<< "\n";
        else if (a[2] == a[3] && a[3] < a[0] <= a[1]) cout << a[0] + a[2] << "\n";
        else if (a[0] == a[1] && a[1] < a[2] <= a[3]) cout << a[2] + a[1] << "\n";
        else if (a[2] == a[3] && a[3] < a[1] <= a[0]) cout << a[1] + a[3] << "\n";
    }

    return 0;
}