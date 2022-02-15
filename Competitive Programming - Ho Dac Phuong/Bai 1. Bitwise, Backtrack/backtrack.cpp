#include <bits/stdc++.h>
using namespace std;

// In ra chuoi nhi phan voi do dai n

int n;
int a[10];

void backtrack (int i) {
    // chung ta da xay dung duoc i phan tu dau
    // nhiem vu xay dung phan tu a[i + 1]
    if (i == n){
        for (int i = 1; i <= n; i++){
            printf("%d ", a[i]);
        } printf("\n");
    }
    else{
        a[i + 1] = 0; backtrack(i + 1);
        a[i + 1] = 1; backtrack(i + 1);
    }
}

int main() {
    cin >> n;
    backtrack(0);
}
