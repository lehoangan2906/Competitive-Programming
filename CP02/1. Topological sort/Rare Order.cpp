#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5 + 10;

vector<int> graph[MAX];
int visited[MAX];
vector<int> result;
int n, m;

bool dfs(int u){
    visited[u] = 1;
    for (int v: graph[u]){
        // voi moi dinh trong cac cap canh trong do thi u
        if (visited[v] == 1)    // cycle detected
            return false;
        if (visisted[v] == 0)
            if (dfs(v) == false){
                return false;
            }
    }
    result.push_back(u);
    visisted[u] = 2;
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // buoc 1: doc du lieu
    // buoc 2: xet cac cap lien ke, lay ra moi quan he giua cac chu cai
    // buoc 3: tao do thi
    // buoc 4: tim thu tu topo

    while(true){
        string s;
        cin >> s;
        if (s == "#"){
            break;
        }

        a.push_back(s);

        for (char c : s){
            // chuyen char thanh gia tri so nguyen cho de kiem soat
            visited[c - 'A'] = false;
        }

        for (int i = 0; i < a.size() - 1; i++){
            // xet cac cap tuong ung cua a[i] va a[i+1]
            for (int j = 0; j < min(a[i].size(), a[i+1].size()); j++){
                // neu hai chu cai khac nhau thi them vao mot canh moi tren graph
                if (a[i][j] != a[i + 1][j]){
                    graph[a[i][j] - 'A'].push_back(a[i + 1][j] - 'A');
                    break;
                }
            }
        }

    }

    return 0;
}
