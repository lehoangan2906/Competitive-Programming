#include <bits/stdc++.h>

using namespace std;
typedef long ll;

int main(){
    string input;
    cin >> input;

    char first = 'a';
    ll sum = 0;
    
    for (int i = 0; i < input.size(); i++){
        ll l1 = abs(input[i] - first);
        ll l2 = 26 - abs(l1);
        sum += min(l1, l2);
        first = input[i];
    }

    cout << sum;

    return 0;
}
