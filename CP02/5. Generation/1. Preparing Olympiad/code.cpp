#include <bits/stdc++.h>
using namespace std;
int c[16];
int main()
{
    int n,l,r,x;cin>>n>>l>>r>>x;
    for(int i=0;i<n;i++)cin>>c[i];
    int ret = 0;
    for(int msk = 0;msk<(1<<n);msk++)
    {
        int sum = 0, cnt =0;
        int minV = 1e9, maxV = -1e9;
        for(int i = 0;i<n;i++)
        {
            if((msk & (1<<i))>0)
            {
                cnt++;
                sum += c[i];
                minV = min(minV,c[i]);
                maxV = max(maxV,c[i]);
            }
        }
        if(sum>=l && sum<=r && maxV-minV >= x && cnt>=2) ret++;
    }
    cout<<ret;
}
