#include<bits/stdc++.h>
using namespace std;
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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int32_t main()
{
    fast_io;
    ll n,k; cin>>n>>k;
    pbds<pll>p;
    vector<ll>v(n);
    ll cnt=0;
    ll half=k/2;
    if(k%2==0) half--;
    ll ind=0;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        if(cnt<k)
        {
            p.insert({v[i],i});
            cnt++;
        }
        else if(cnt==k)
        {
            auto it= p.find_by_order(half);
            cout<<(*it).first<<" ";
            p.erase({v[ind],ind});
            p.insert({v[i],i});
            ind++;
        }
    }
    auto it= p.find_by_order(half);
    cout<<(*it).first<<" ";
}