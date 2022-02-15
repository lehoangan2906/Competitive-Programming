#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;    // The number need to be checked
    cin >> n;
    int i = 0;
    int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    while(lucky[i] <= 777){
        if(n % lucky[i] == 0){
            cout <<"YES";
            return 0;
        }
        i++;
    }
    cout <<"NO";
    return 0;
}