#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dp[n+1],i;
    dp[0]=0;
    for(i=1;i<=n;i++)
        dp[i]=INT_MAX;
    for(i=1;i<=n;i++)
    {
        int temp=i,mini=INT_MAX;
        while(temp>0)
        {
            int digit=temp%10;
            temp=temp/10;
            mini=min(mini,dp[i-digit]);
        }
        dp[i]=mini+1;
    }
    cout<<dp[n]<<endl;
}
