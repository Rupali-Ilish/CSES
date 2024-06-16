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
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    map<ll,ll>mp;
    ll shuruindex=0;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(!mp.count(v[i])) //na thakle
        {
            mp[v[i]]= i; //index rakhlam
        }
        else //ase
        {
            if(mp[v[i]]>=shuruindex) //ekhn er occurance shurur index er por hoile
            {
                shuruindex= mp[v[i]]+1; //shuru hbe last occurance ta bad diye
            }
            mp[v[i]]=i; //last occurance rakhtesi
        }
        //cout<<"i shuru "<<i<<" "<<shuruindex<<endl;
        ans= max(ans, i-shuruindex+1);
        //cout<<"ans "<<ans<<endl;
    }
    cout<<ans<<endl;
}