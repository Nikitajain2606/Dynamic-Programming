#include<bits/stdc++.h>
#define ll long long
const int mod=1e9+7;
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1],i,j,dp[n+1][m+1];
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=0;i<=n;i++)
        for(j=0;j<=m;j++)
            dp[i][j]=0;
    for(i=1;i<=m;i++)
    {
        if(a[1]==i||a[1]==0)
            dp[1][i]=1;
        else dp[1][i]=0;
    }
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            ll opt1=(j==1)?0:dp[i-1][j-1];
            ll opt2=dp[i-1][j];
            ll opt3=(j==m)?0:dp[i-1][j+1];
            dp[i][j]=(a[i]==j||a[i]==0)? (opt1+opt2+opt3)%mod:0;
        }
    }
    ll sum=0;

    for(i=1;i<=m;i++)
    {
        sum=(sum+dp[n][i])%mod;
    }

    cout<<sum<<endl;

}
