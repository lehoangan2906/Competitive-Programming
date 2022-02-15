# include <bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    cin>>s;
    s = '#' + s;
    int n = s.length() - 1;
    int cnt = 0;
    for (int i = 1;i + i <= n;++i)
        if (s[i] != s[n - i + 1])
            ++cnt;
    if ((cnt <= 1 && (n&1)) || cnt == 1) printf("YES");
    else printf("NO");
    return 0;
}
