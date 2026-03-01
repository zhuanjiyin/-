#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define  endl '\n'
const int N=2e5+10;
void solve()
{
    int n,m;cin>>n>>m;
    vector<pair<ll,ll>>a(n+1);
    vector<bool>vis(n+1,false);
    vector<pair<int,int>>ans;
    for(int i=1;i<=n;i++)
    {
        ll x;cin>>x;
        a[i]=make_pair(x,i);
    }
    sort(a.begin()+1,a.end(),
    [](pair<int,int>a,pair<int,int>b){return a.first<b.first;});
    if(m==0)
    {
        ll sum=0;
        for(int i=1;i<=n-1;i++)sum+=a[i].first;
        if(sum<a[n].first){cout<<-1<<endl;return;}
        else
        {
            ll h=a[n].first;
            for(int i=n-1;i>=1;i--)
            {
                if(a[i].first<h)
                {
                    h-=a[i].first;
                    ans.push_back(make_pair(a[i].second,a[n].second));
                    vis[i]=true;
                }
            }
            int pre=-1;
            for(int i=1;i<=n;i++)
            {
                if(vis[i])continue;
                if(pre!=-1)ans.push_back(make_pair(pre,a[i].second));
                pre=a[i].second;
            }
        }
    }
    else
    {
        if(m>n/2){cout<<-1<<endl;return;}
        else
        {
            for(int i=1,j=n-1;i<=m-1;i++,j--)
            {
                ans.push_back(make_pair(a[j].second,a[i].second));
            }
            int pre=-1;
            for(int i=m;i<=n-m;i++)
            {
                if(pre!=-1)ans.push_back(make_pair(pre,a[i].second));
                pre=a[i].second;
            }
            if(pre==-1)pre=a[n-m].second;
            ans.push_back(make_pair(a[n].second,pre));
        }
    }
    cout<<ans.size()<<endl;
    for(auto &[x,y]:ans)cout<<x<<" "<<y<<endl;
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