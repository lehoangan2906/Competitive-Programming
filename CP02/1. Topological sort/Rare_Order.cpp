#include <bits/stdc++.h>

using namespace std;
const int MAX = 1e5 + 10;
vector<int> graph[26];
vector<bool> digited(26, true);
bool visited[MAX];
vector<int> result;
vector<string> a;

void dfs(int u){
    visited[u] = true;
    for (int v : graph[u])
        if (!visited[v])
            dfs(v);
    result.push_back(u);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // đọc dữ liệu
    // xét các cặp liền kề, lấy ra mối quan hệ giữa các chữ cái
    // tạo đồ thị
    // tìm thứ tự topo

    while(true){
        string s;
        cin >> s;
        if (s == "#") break;
        a.push_back(s);
        for (char c: s){
            visited[c - 'A'] = false;
        }

        for (int i = 0; i < a.size() - 1; i++){
            for(int j = 0; j < min(a[i].size(), a[i + 1].size()); j++){
                // xet cac cap ky tu tuong ung cua a[i] va a[i+1]
                if (a[i][j] != a[i + 1][j]){
                    graph[a[i][j] - 'A'].push_back(a[i + 1][j] - 'A');
                    break;
                }
            }
        }

        for (int i = 0; i < 26; i++){
            if (!visited[i]){
                if (!dfs(i)){
                }
            }
        }

    }

    reverse(result.begin(), result.end());
    for(int x: result)
        cout << char(x + 'A');

    return 0;
}