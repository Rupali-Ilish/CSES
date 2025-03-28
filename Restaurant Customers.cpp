#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pi acos(-1.0)
#define pb push_back
#define sqrt(x) sqrtl(x)
#define pll pair<ll,ll>
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define allout(x) for(auto &it: x) cout<<it<<" "; cout<<endl
#define out(y,a,n) for(ll i=a; i<=n; i++) cout<<y[i]<<" "; cout<<endl
#define fix(n,val) fixed<<setprecision(n)<<val
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int32_t main()
{
    fast_io;
    map<ll,ll>m;
    ll n; cin>>n;
    while(n--)
    {
        ll l,r; cin>>l>>r;
        m[l]++;
        m[r+1]--;
    }
    ll ans=0,sum=0;
    for(auto [x,y]:m)
    {
        sum+=y;
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
}
