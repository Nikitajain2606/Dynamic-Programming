#include<bits/stdc++.h>
#define ll long long
const int mod=1e9+7;
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n+1],dp[n+1][x+1],i,j;
    for(i=1;i<=n;i++)
        cin>>a[i];
    dp[0][0]=1;
    for(i=1;i<=x;i++)
        dp[0][i]=0;
    for(i=1;i<=n;i++)
    {
        dp[i][0]=1;
        for(j=1;j<=x;j++)
        {
            int opt1=dp[i-1][j];
            int opt2=((j-a[i])>=0)?dp[i][j-a[i]]:0;
            dp[i][j]=(opt1+opt2)%mod;
        }
    }
    cout<<dp[n][x]<<endl;
}
