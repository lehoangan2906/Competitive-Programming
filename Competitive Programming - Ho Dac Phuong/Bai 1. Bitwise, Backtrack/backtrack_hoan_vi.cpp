#include <bits/stdc++.h>
using namespace std;

// Bai toan hoan vi n phan tu va in ra tat ca cac hoan vi

int n;
int a[11];
bool check[11]; 
// neu su dung i trong hoan vi roi thi check[i] = true

void backtrack (int i) {
    if (i == n){
        for (int i = 1; i<= n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }else{
        for (int j = 1; j <= n; j++){
            if (!check[j]){
                // neu check[j] = false thi moi cho phep a[i + 1] = j
                a[i + 1] = j;
                check[j] = true;

                // sau khi tim duoc i roi thi moi backtrack(i + 1)
                backtrack(i + 1);
                check[j] = false;
                // chung ta phai reset lai check[j] = false vi neu khong thi sau khi backtrack(i + 1)
                // thi a[i + 1] = j se bi trung voi a[i]
            }
        }
    }
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++) check[i] = false;
    backtrack(0);
}
