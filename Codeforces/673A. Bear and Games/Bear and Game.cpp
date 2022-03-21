#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;     // number of interesting minutes
    cin >> n;
    vector<int> a(n);   // array of interesting minutes
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int sum = 0;
    int pos;
    bool check = 1;

    if (a[0] > 15){
        sum = 15;
    }else{
        for (int i = 0; i < n; i++){
            if (a[i] - a[i - 1] > 15){
                pos = i - 1;
                check = 1;
                break;
            }
        }

        if (check == 1){
            sum += a[pos] + 15;
        }else{
            sum += a[pos - 1] + 15;
        }
    }


    if (sum > 90){
        cout << 90;
    }else{
        cout << sum;
    }
    
    return 0;
}
