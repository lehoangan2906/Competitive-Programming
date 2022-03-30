#include <bits/stdc++.h>

using namespace std;
long long cost = 1e18;
vector<int> dist(200005);
map<int, int> mp;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;
    long long k;
    cin >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        --a[i];
    }

    int x = 1;
    mp[0] = 0;
    int start = 0;
    int l, h;
    for (int i = 0; i <= n; i++){
        dist[x] = a[start];
        if (mp.count(dist[x]) > 0){
            l = mp[dist[x]];
            h = x;
            break;
        }
        else{
            mp[dist[x]] = x;
        }
        x++;
        start = a[start];
    }

    if (k < h){
        cout << dist[k] + 1;
    }else{
        int loop = h - 1;
        k -= 1;
        k = k % loop;
        cout << dist[1 + k];
    }

    return 0;
}
