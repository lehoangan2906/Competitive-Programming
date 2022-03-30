#include <bits/stdc++.h>

using namespace std;

int n;
int array[n];

void make_graph(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(array[i] > array[j]){
                cout << i << " " << j << endl;
            }
        }
    }
}

int main(){
    ios::sync_with_stdiio(false);
    cin.tie(0);
    cout.tie(0);

    // cac vertex trong do thi duoc sap xep theo thu tu tang dan va khong co chu trinh
    //  -- tao do thi
    //  -- tim thu tu topo
    //  -- tim duong di dai nhat trong do thi

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    make_graph();

    return 0;
}