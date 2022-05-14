#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
const int N = 100005, oo = 0x3c3c3c3c;
int n, m, d[N];		// d[u] la khoang cach tu nut u den cay khung dang xay dung, d[u] = 0 khi u da duoc cho vao cay khung

vector<int> a[N], b[N];		// a[u] la danh sach ke cua dinh u, ket thuc voi so 0
				// b[u][i] la trong so cua canh thu i trong danh sach ke dinh u

long long prim(int u){
    long long Sum = 0;
    priority_queue<ii> qu;

    for (int i = 1; i <= n; i++)
        d[i] = oo;

    qu.push(ii(0, u));
    d[u] = 0;

    while (qu.size()){
        ii Pop = qu.top();
        qu.pop();
        int u = Pop.second, du = -Pop.first;

        if (du != d[u]) continue;

        Sum += d[u];
        d[u] = 0;

        for (int i = 0; i < a[u].size(); ++i){
            int v = a[u][i];
            if (d[v] > b[u][i]){
                d[v] = b[u][i];
                qu.push(ii(-d[v], v));
            }
        }
    }

    return Sum;		// tra ve trong so cay khung nho nhat
}

int main(){
    // fast io
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n >> m;

    for (int i = 1; i <= m; i++){
        int x, y, z;
        cin >> x >> y >> z;
        a[x].push_back(y);
        b[x].push_back(z);
        a[y].push_back(x);
        b[y].push_back(z);
    }

    cout << prim(1) << "\n";
}
