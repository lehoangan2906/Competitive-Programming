#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; // number of buttons in the jacket
    cin >> n;

    vector<int> a(n);
    for (int j = 0; j < n; j++){
        cin >> a[j];
    }

    if (n == 0){
        cout << "YES";
    }
    else if (n == 1 && a[0] == 1){
        cout << "YES";
    }
    else if (n > 1){
        int count = 0;
        for (int i = 0; i < n; i++){
            if (a[i] == 0){
                count += 1;
            }
        }
        if (count != 1){
            cout << "NO";
        }else{
            cout << "YES";
        }
    }
    else{
        cout << "NO";
    }

    return 0;
}
