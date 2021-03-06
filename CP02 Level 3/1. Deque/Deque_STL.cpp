#include <bits/stdc++.h>
using namespace std;

vector<int> solve(const vector<int>& arr, int n, int k){
    vector<int> res;
    deque<int> dq;

    for (int i = 0; i < n; i++){
        if (!dq.empty() && dq.front() <= i - k){
            dq.pop_front();
        }

        while (!dq.empty() && arr[dq.back()] <= arr[i]){
            dq.pop_back();
        }

        dq.push_back(i);

        if (i >= k - 1){
            res.push_back(arr[dq.front()]);
        }
    }

    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n,  // size of each array
        k;  // size of each subarray
        cin >> n >> k;

        vector<int> arr(n);

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        vector<int> res = solve(arr, n, k);
        
        for (int x : res){
            cout << x << " ";
        }

    }

    return 0;
}
