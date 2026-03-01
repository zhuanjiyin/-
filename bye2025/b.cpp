#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define  endl '\n'
const int N=2e5+10;
void solve()
{
    string s;cin>>s;
    int n=s.length();
    s="#"+s;
    int ans=0;
    if(s[1]=='u')ans++,s[1]='s';
    if(s[n]=='u')ans++,s[n]='s';
    for(int i=2;i<=n-1;i++)
    {
        if(s[i]=='u'&&s[i-1]=='u')
        {
            s[i]='s';
            ans++;
        }
    }
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