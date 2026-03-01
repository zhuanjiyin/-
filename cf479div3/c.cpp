#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define  endl '\n'
const int MAX=1e9;
int f(int val,vector<int>&a)
{
    int pos=upper_bound(a.begin()+1,a.end(),val)-a.begin();
    return pos-1;
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,k;cin>>n>>k;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a.begin()+1,a.end());
    int l=1,r=1e9+1;
    while(l+1<r)
    {
        int mid=(l+r)>>1;
        if(f(mid,a)<=k)l=mid;
        else r=mid;
    }
    if(f(l,a)==k)cout<<l<<endl;
    else cout<<-1<<endl;
    return 0;
}