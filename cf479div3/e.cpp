#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define  endl '\n'
const int N=2e5+10;
vector<int>edge[N];
int n,m,ans,fa[N];
bool vis[N];
int find(int x){return (fa[x]==x?x:fa[x]=find(fa[x]));}
bool dfs(int x,int fa)
{
    if(vis[x])return true;
    if(edge[x].size()!=2)return false;
    vis[x]=true;
    for(auto &y:edge[x])
    {
        if(y==fa)continue;
        if(dfs(y,x))return true;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)fa[i]=i;
    for(int i=1;i<=m;i++)
    {
        int u,v;cin>>u>>v;
        edge[u].push_back(v);
        edge[v].push_back(u);
        int fu=find(u),fv=find(v);
        if(fu!=fv)fa[fu]=fv;
    }
    for(int i=1;i<=n;i++)if(fa[i]==i&&dfs(i,0))ans++;
    cout<<ans<<endl;
    return 0;
}