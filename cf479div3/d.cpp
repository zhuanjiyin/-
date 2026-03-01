#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define  endl '\n'
const int N=2e5+10;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;cin>>n;
    vector<ll>a(n+1),ind(n+1,0);
    vector<vector<int>>edge(n+1,vector<int>());
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i]*2ll==a[j]){edge[i].push_back(j);ind[j]++;}
            if(a[i]%3==0&&a[i]/3==a[j]){edge[i].push_back(j);ind[j]++;}
        }
    }
    queue<int>q;
    vector<ll>ans;
    for(int i=1;i<=n;i++)if(ind[i]==0)q.push(i);
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        ans.push_back(a[x]);
        for(auto &y:edge[x])
        {
            ind[y]--;
            if(ind[y]==0)q.push(y);
        }
    }
    for(auto &x:ans)cout<<x<<" ";
    return 0;
}