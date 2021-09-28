#include<bits/stdc++.h>
#define ll long long
const int mod=1e9+7;
using namespace std;
int main()
{
    int n;
    cin>>n;
    ll dp[n+1],i,j;
    for(i=0;i<=n;i++)
        dp[i]=0;
    dp[0]=1;
    dp[1]=1;
    for(i=2;i<=n;i++)
    {
        for(j=1;j<7;j++)
        {
            if((i-j)>=0)
                dp[i]=(dp[i]+dp[i-j])%mod;
        }
    }
    cout<<dp[n]<<endl;
}
