/*
 You've got an array a, consisting of n integers: a1, a2, ..., an. Your task is to find a minimal 
 y inclusion segment [l, r] (1 <= l <= r <= n) such that among numbers al, al+1, ..., ar,
 there are exactly k distinct numbers.

 Segment [l, r] (1 <= l <= r <= n; l , r are integers) of length m = r - l + 1, satisfying the given
 property, is called minimal by inclusion, if there is no segment [x, y] satisfying the property
 and less than m in length, such that 1 <= l <= x <= y <= r <= n. Note that the segment [l, r]
 doesn't have to be minmal in length among all segments, satisfying the given property.
*/


#include <bits/stdc++.h>

using namespace std;

int n, k;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }


    
       
    return 0;
}
