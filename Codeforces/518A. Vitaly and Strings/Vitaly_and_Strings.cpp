#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t;    // lowercase letters
    cin >> s;
    cin >> t;

    int S = s.length(), T = t.length();
    if (S == T && s < t){
        string a = s;
        for (int i = a.length() - 1; i >= 0; i--){
            while (a[i] < 'z'){
                a[i]++;
                if (a < t){
                    cout << a;
                    return 0;
                }
            }
            if (a[i] == 'z'){
                a[i] = 'a';
            }
        }
    }

    cout << "No such string";

    return 0;
}
