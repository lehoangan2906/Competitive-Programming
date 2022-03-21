#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l, r, minl, maxr, number(1);
    scanf("%d%d%d", &n, &minl, &maxr);
    for (int i = 2; i <= n; ++i)
    {
        scanf("%d%d", &l, &r);
        if (l <= minl && r >= maxr)
        {
            number = i;
        }
        else if (l < minl || r > maxr)
        {
            number = -1;
        }
        minl = min(minl, l);
        maxr = max(maxr, r);
    }
    printf("%d\n", number);
    return 0;
}
