#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2e5+10;
void solve()
{
    int n;cin>>n;
    ll sum=0,pre=1,l=0,r=n+1,cnt=0,nxtsum;
    cout<<"? "<<1<<" "<<n<<endl;
    cin>>sum;
    auto check=[](int l,int r,int pre,ll sum)->int
    {
        ll x;
        int idx=-1;
        while(l+1<r)
        {
            int mid=(l+r)>>1;
            cout<<"? "<<pre<<" "<<mid<<endl;
            cin>>x;
            if(x*2>=sum){r=mid;if(x*2==sum)idx=mid;}
            else l=mid;
        }
        return idx;
    };
    nxtsum=sum;
    ll num=r-1-l;
    ll mid=check(l,r,pre,nxtsum);
    while(mid!=-1)
    {
        cnt++;
        nxtsum/=2;
        if(mid-pre+1<=r-1-mid)r=mid+1;
        else pre=mid+1,l=mid;
        num=r-1-l;
        mid=check(l,r,pre,nxtsum);
    }
    sum=sum/(1<<cnt);
    ll s=1;
    while(s*2ll<=num)s*=2ll,sum/=2;
    cout<<"! "<<sum<<endl;
}
int main()
{
    int t=1;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}