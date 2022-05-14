#include <bits/stdc++.h>
using namespace std;

int main(){
    // priority_queue<data_type> variable;

    priority_queue<int> pqmax;
    priority_queue<int> pqmin;

    // su dung nhu max_heap
    int h[] = {7, 12, 6, 10, 17, 15, 2, 4};
    
    for (int i = 0; i < 8; i++){
        pqmax.push(h[i]);
    }


    // su dung nhu min_heap
    int l[] = {7, 12, 6, 10, 17, 15, 2, 4};
    
    for (int i = 0; i < 8; i++){
        pqmin.push(l[i]);
    }
}
