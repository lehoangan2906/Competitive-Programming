#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& A, int k){
    const int n = A.size();
    int ans = n + 1;
    deque<int> q;
    vector<long> prefix(n + 1);

    for (int i = 0; i < n; i++){
        prefix[i + 1] = prefix[i] + A[i];
    }

    for (int i = 0; i < n + 1; i++){
        while(!q.empty() && prefix[i] - prefix[q.front()] >= k)
            ans = min(ans, i - q.front()), q.pop_front();
        while (!q.empty() && prefix[i] <= prefix[q.back()])
            q.pop_back();
        q.push_back(i);
    }

    return ans <= n ? ans : - 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << solve(arr, k) << "\n";
    
    return 0;
}
