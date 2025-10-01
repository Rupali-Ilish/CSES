#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pi acos(-1.0)
#define pb push_back
#define sqrt(x) sqrtl(x)
#define pll pair<ll, ll>
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define all(x) (x).begin(), (x).end()
#define in(x)          \
    for (auto &it : x) \
        cin >> it;
#define allout(x)          \
    for (auto &it : x)     \
        cout << it << " "; \
    cout << endl
#define out(y, a, n)            \
    for (ll i = a; i <= n; i++) \
        cout << y[i] << " ";    \
    cout << endl
#define vsum(x) accumulate((x).begin(), (x).end(), 0LL)
#define vec2d(name, n, m, val) vector<vector<ll>>(name)((n), vector<ll>((m), (val)))
#define fix(n, val) fixed << setprecision(n) << val
#define padding0(n, val) setw(n) << setfill('0') << val
#define dbug(x) cout << #x << " -> " << x << endl;
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

void knight(ll n)
{
    ll valid = 0, atk = 0, noatk = 0;
    valid = n * n * (n * n - 1) / 2;
    atk = 4 * (n - 1) * (n - 2);
    noatk = valid - atk;
    cout << noatk << endl;
}

void Rupalisaurus()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        knight(i);
    }
}

int32_t main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    fast_io;

    Rupalisaurus();
}