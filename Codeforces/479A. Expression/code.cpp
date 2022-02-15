#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main(){
    cin >> a;
    cin >> b;
    cin >> c;
    int ans = a + b + c;
    ans = max(ans, a*(b + c));
    ans = max(ans, (a + b) * c);
    ans = max(ans, a*b*c);

    cout << ans <<endl;

    return 0;

}