#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <limits>
#include <utility>
#include <iomanip>
#include <set>
#include <numeric>
#include <cassert>
#include <ctime>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define INF_LL 9223372036854775807LL
#define INF 2000000000
#define PI acos(-1.0)
#define EPS 1e-8
#define LL long long
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define setzero(a) memset(a,0,sizeof(a))
#define setdp(a) memset(a,-1,sizeof(a))
#define bits(a) __builtin_popcount(a)

using namespace std;

vector<pair<int, int> > a, b;

int main()
{
  ios_base::sync_with_stdio(0);
  //freopen("lca.in", "r", stdin);
  //freopen("lca.out", "w", stdout);
  int n, x, y;
  cin >> n;
  for(int i=0;i<n;i++)
  {
    cin >> x >> y;
    if(x < 0) a.pb(mp(x, y));
    else b.pb(mp(x, y));
  }
  sort(a.begin(), a.end(), greater<pair<int, int> >());
  sort(b.begin(), b.end());
  int res = 0;
  if(a.size() == b.size())
  {
    for(int i=0;i<a.size();i++)
      res+=a[i].s + b[i].s;
  }
  else if(a.size() > b.size())
  {
    for(int i=0;i<b.size();i++)
      res+=a[i].s + b[i].s;
    res+=a[b.size()].s;
  }
  else
  {
    for(int i=0;i<a.size();i++)
      res+=a[i].s + b[i].s;
    res+=b[a.size()].s;
  }
  cout << res;
  return 0;
}