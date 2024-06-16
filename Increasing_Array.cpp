#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define pll pair<ll,ll>
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define fix(n,val) fixed<<setprecision(n)<<val
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int32_t main()
{
    fast_io;
    ll n; cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll ans=0;
    for(ll i=1;i<n;i++)
    {
        if(v[i]<v[i-1]) 
        {
            ans+=v[i-1]-v[i];
            v[i]+=v[i-1]-v[i];
        }
    }
    cout<<ans<<endl;
}