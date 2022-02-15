#include <bits/stdc++.h>
using namespace std;

int x, y, z, x1 (0), x2 (0), x3 (0);

int main(){
    int n;
    cin >> n;
    while(n--){
        cin >> x >> y >> z;
        x1 += x;
        x2 += y;
        x3 += z;
    }

    if(x1 == 0 && x2 == 0 && x3 == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}