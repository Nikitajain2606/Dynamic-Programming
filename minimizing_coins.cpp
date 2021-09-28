#include<bits/stdc++.h>
const int inf=1e9;
using namespace std;
int main()
{
    int n,amt,i,j;
    cin>>n>>amt;
    int a[n],dp[amt+1];
    for(i=0;i<n;i++)
        cin>>a[i];
    dp[0]=0;
    for(i=1;i<=amt;i++)
        dp[i]=inf;
    for(i=1;i<=amt;i++)
    {
        int temp=inf;
        for(j=0;j<n;j++)
        if((i-a[j])>=0) temp=min(temp,dp[i-a[j]]);
        if(temp!=inf)
            dp[i]=temp+1;
        //cout<<dp[i]<<" ";
    }
    //cout<<endl;
    if(dp[amt]!=inf)
    cout<<dp[amt]<<endl;
    else
        cout<<-1<<endl;
}
