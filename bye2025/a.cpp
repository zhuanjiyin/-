#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define  endl '\n'
const int N=2e5+10;
void solve()
{
    string s;cin>>s;
    int Y=0;
    for(auto ch:s)Y+=(ch=='Y');
    if(Y<=1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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