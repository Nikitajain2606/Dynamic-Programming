#include<bits/stdc++.h>
#define ll long long
const int mod=1e9+7;
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch[n][n];int dp[n][n];
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
             cin>>ch[i][j];
             dp[i][j]=0;
        }
    dp[0][0]=(ch[0][0]=='*') ? 0: 1;
    for(i=1;i<n;i++)
        dp[0][i]= (ch[0][i]=='*') ? 0: dp[0][i-1];
    for(i=1;i<n;i++)
    {
        dp[i][0]= (ch[i][0]=='*') ? 0: dp[i-1][0];
        for(j=1;j<n;j++)
        {
            ll opt1=dp[i-1][j];
            ll opt2=dp[i][j-1];
            dp[i][j]=(ch[i][j]=='*') ? 0:(opt1+opt2)%mod;
        }
    }

    /*for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }*/
    cout<<dp[n-1][n-1]<<endl;
}
