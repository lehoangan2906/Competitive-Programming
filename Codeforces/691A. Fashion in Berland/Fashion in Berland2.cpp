#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,t,val,k;

    while (cin >> n)
    {
        t = n, k = 0;

        while (n--)
        {
            cin >> val;

            if (val)
                k++;
        }

        if ((k == t && t == 1) || (k == t-1 && t != 1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
