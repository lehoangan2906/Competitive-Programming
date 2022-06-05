#include <bits/stdc++.h>
using namespace std;

int solve(const vector<int>& arr, int n, int k){
    int res = 1e7;
    deque<int> dq;

    for (int i = 0; i < n; i++){
        if (!dq.empty() && dq.front() <= i - k){
            dq.pop_front();
        }

        while (!dq.empty() && arr[dq.back()] <= arr[i]){
            dq.pop_back();
        }

        dq.push_back(i);

        if ( i >= k - 1){
            res = min(res, arr[dq.front()]);
        }
    }

    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    

    int n, q;
    cin >> n >> q;

    vector<int> arr (n);
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0 ; i < q; i++){
        int d;
        cin >> d;
      
        cout << solve(arr, n, d) << "\n";
    }

    return 0;
}
