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
    ll t; cin>>t;
    map<ll,ll>all;
    while(t--)
    {
        ll n; cin>>n;
        if(!all.count(n))
        {
            map<ll,ll>mp;
            ll tmp=n;
            for(ll i=2; i*i<=n; i++)
            {
                if(n%i==0)
                {
                    while(n%i==0)
                    {
                        mp[i]++;
                        n/=i;
                    }
                }
            }
            if(n>1) mp[n]++;
            ll ans=1;
            for(auto m: mp)
            {
                ans*=(m.second+1);
            }
            all[tmp]=ans;
            cout<<ans<<endl;
        }
        else
        {
            cout<<all[n]<<endl;
        }
    }
}