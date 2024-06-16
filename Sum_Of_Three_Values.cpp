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
    ll n,x; cin>>n>>x;
    vector<pll> v;
    for(ll i=0;i<n;i++)
    {
        ll a; cin>>a;
        v.pb({a,i+1});
    }
    choto(v);
    for(ll i=0;i<n;i++)
    {
        ll tar= x-v[i].ff;
        ll l=i+1, r=n-1;
        while(l<r)
        {
            ll sum= v[l].ff + v[r].ff;
            if(sum<tar)
            {
                l++;
            }
            else if(sum>tar)
            {
                r--;
            }
            else
            {
                cout<<v[i].ss<<" "<<v[l].ss<<" "<<v[r].ss<<endl;
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}