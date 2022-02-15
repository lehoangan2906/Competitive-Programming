#include <bits/stdc++.h>
using namespace std;

int main(){

    int col = 8, row = 8;
    int array[8][8] = {0};

    for (int i = row, j = col; j >= 0 && i >= 0; i--, j--){
        array[i][j] = 1;    
    }

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            cout << array[i][j] << " ";
        }
        cout << "\n" << endl;
    }
}
