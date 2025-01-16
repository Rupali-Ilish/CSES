#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define pll pair<ll, ll>
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
ll n, t;
ll v[200005];
bool check(ll mid)
{
    ll prod = 0;
    for (ll i = 0; i < n; i++)
    {
        prod += mid / v[i];
        if (prod >= t) return true;
    }
    return false;
}
int main()
{
    fast_io;
    cin >> n >> t;
    for (ll i = 0; i < n; i++) cin >> v[i];
    sort(v, v + n);
    ll ans = 0;
    ll l = v[0], h = v[n - 1] * t;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        if (check(mid))
        {
            ans = mid;
            h = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
}