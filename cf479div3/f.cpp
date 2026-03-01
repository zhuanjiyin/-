#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define  endl '\n'
const int N=2e5+10;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    map<int,int>dp;
    for(int i=1;i<=n;i++)
    {
        if(dp.find(a[i]-1)!=dp.end())dp[a[i]]=dp[a[i]-1]+1;
        else if(dp.find(a[i])==dp.end())dp[a[i]]=1;
    }
    int val=0,cnt=0;
    for(auto &[v,num]:dp)if(num>cnt){cnt=num;val=v;}
    cout<<cnt<<endl;
    int l=val-cnt+1,r=val;
    for(int i=1;i<=n&&l<=r;i++)if(a[i]==l){cout<<i<<" ";l++;}
    return 0;
}