#include<bits/stdc++.h>
#define ll long long
const int mod=1e9+7;
using namespace std;
int main()
{
    int n,x,i,j;
    cin>>n>>x;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    ll dp[x+1]={0};
    dp[0]=1;
    for(i=1;i<=x;i++)
    {
        for(j=0;j<n;j++)
            if((i-a[j])>=0) dp[i]=(dp[i]+dp[i-a[j]])%mod;
    }
    cout<<dp[x]<<endl;
}
