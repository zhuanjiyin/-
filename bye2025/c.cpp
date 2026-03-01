#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define  endl '\n'
const int N=2e5+10;
const ll inf=1ll<<60;
void solve()
{
    int n;cin>>n;
    vector<ll>a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    vector<ll>suf(n+2,0);
    for(int i=n;i>=1;i--)suf[i]=suf[i+1]+a[i];
    ll ans=-inf;
    vector<ll>smx(n+1,0);
    smx[1]=a[1];
    for(int i=2;i<=n;i++)smx[i]=smx[i-1]+abs(a[i]);
    for(int i=1;i<=n;i++)ans=max(ans,smx[i-1]-suf[i+1]);
    cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}