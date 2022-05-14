#include <bits/stdc++.h>
using namespace std;

vector<int> h;

void minHeapify(int i){
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < h.size() && h[left] < h[smallest])
        smallest = left;
    if (right < h.size() && h[right] < h[smallest])
        smallest = right;
    if (smallest != i){
        swap(h[i], h[smallest]);
        minHeapify(smallest);
    }

}

// ham xay dung min-heap tu mang h[] co n phan tu: thuc hien
// chuan hoa cay tu vi tri cuoi cung co node la


void buildHeap(int n){
    for (int i = n/2 - 1; i >= 0; i--){
        minHeapify(i);
    }
}



// tra ve vi tri cua phan tu nho nhat trong heap (vi tri dau tien or root)
int top(){
    return h[0];
}



// them mot phan tu vao heap
// - Dau tien them phan tu do vao vi tri cuoi cung trong array
// - sau do tim node cha cua phan tu do
// - neu gia tri cua node cha lon hon gia tri cua node vua them, switch vi tri hai node

void push(int value){
    h.push_back(value);
    int i = h.size() - 1;

    while (i != 0 && h[(i - 1) / 2] > h[i]){
        swap(h[i], h[(i - 1)p / 2]);
        i = (i - 1) / 2;
    }
}

// xoa mot phan tu khoi heap
//  - gan gia tri cua phan tu cuoi heap cho phan tu can xoa
//  - xoa phan tu cuoi heap
//  - can bang lai cay heap


void pop(){
    int length = h.size();
    if (length == 0){
        return ;
    }

    h[0] = h[length - 1];
    h.pop_back();
    minHeapify(0);
}


int main(){
    h = {7, 12, 6, 10, 17, 15, 2, 4};
    buildHeap(h.size());
    return 0;
}
