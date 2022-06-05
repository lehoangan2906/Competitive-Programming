// Given an array A including N integers and a positive integer K. Find the max value of each subarray of size K of A. K <= N <= 10^5

#include <bits/stdc++.h>
using namespace std;

// to avoid the program making new array and copying 
// each time adding new element, we pass it by reference
// and use const to avoid changing its content
vector<int> maxKSubarray(const vector<int>& a, int n, int k){
    vector<int> res;        // mang ket qua
    deque<int> dq;          // deque de luu cac ung vien

    for (int i = 0; i < n; i++){
        
        // neu deque khac rong va phan tu dau tien khong
        // con nam trong subarray co kich thuoc bang k ket
        // thuc tai vi tri i thi phan tu dau tien khong the duoc
        // chon nua
        if (!dq.empty() && dq.front() <= i - k){
            dq.pop_front();
        }

        // nhung gia tri o sau a[i] ma be hon a[i] thi se khong
        // duoc xet nua vi a[i] dang la phan tu co gia tri lon nhat
        while (!dq.empty() && a[dq.back()] <= a[i]){
            dq.pop_back();
        }

        // khi da loai duoc cac phan tu khong thoa man thi them phan tu i vao deque
        dq.push_back(i);

        // khi duyet het subarray co do dai k thi luu phan tu lon nhat (phan tu dau tien cua deque)
        // vao mang ket qua res
        if (i >= k - 1){
            res.push_back(a[dq.front()]);
        }
    }

    return res;
}

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> res = maxKSubarray(a, n, k);

    for (int x : res){
        cout << x << " ";
    }

    return 0;
}
