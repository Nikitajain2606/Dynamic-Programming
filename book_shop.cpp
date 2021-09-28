#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int p[n+1],pag[n+1],i,j;
    for(i=1;i<=n;i++)
        cin>>p[i];
    for(i=1;i<=n;i++)
        cin>>pag[i];
    int dp[n+1][x+1];
    for(i=0;i<=n;i++)
        for(j=0;j<=x;j++)
            dp[i][j]=0;
            //dp[0][0]=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=x;j++)
        {
            int opt1=0;
            if((j-p[i])>=0)
                opt1= dp[i-1][j-p[i]]+pag[i];
            int opt2= dp[i-1][j];
            dp[i][j]=max(opt1,opt2);
        }
    }
    /*for(i=0;i<=n;i++)
    {
        for(j=0;j<=x;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    int ans=-1;
    for(i=x;i>=0;i--)
    {
        if(dp[n][i]>ans)
            ans=dp[n][i];
    }
    cout<<ans<<endl;
}
