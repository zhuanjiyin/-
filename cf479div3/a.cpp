#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define  endl '\n'
const int N=2e5+10;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,k;cin>>n>>k;
    for(int i=1;i<=k;i++)
    {
        int x=n%10;
        if(x)n--;
        else n/=10;
    }
    cout<<n<<endl;
    return 0;
}