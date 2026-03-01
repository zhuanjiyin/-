#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define  endl '\n'
const int N=2e5+10;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;cin>>n;
    string s;cin>>s;
    s="#"+s;
    int cnt=0;
    char ans[2];
    for(int x=0;x<=25;x++)
    {
        for(int y=0;y<=25;y++)
        {
            int num=0;
            for(int i=1;i<n;i++)if(s[i]==((char)(x+'A'))&&s[i+1]==((char)(y+'A')))num++;
            //cout<<((char)(x+'a'))<<" "<<((char)(y+'a'))<<endl;
            if(num>cnt){cnt=num;ans[0]=(x+'A');ans[1]=(y+'A');}
            //cout<<num<<endl;
        }
    }
    cout<<ans[0]<<ans[1]<<endl;
    return 0;
}