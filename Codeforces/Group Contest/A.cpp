#include <bits/stdc++.h>

using namespace std;

int main(){
    long long N;
    cin >> N;
    long long v[N];
    for (int i = 0; i < N; i++){
        cin >> v[i];
    }

    long long m = v[0];
    for (int i = 0; i < N; i++){
        if (v[i] > m){
            m = v[i];
        }
        cout << m << " ";
    }

    return 0;
}