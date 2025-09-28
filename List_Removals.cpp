#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define allout(x)          \
    for (auto &it : x)     \
        cout << it << " "; \
    cout << endl
#define dbug(x) cout << #x << " -> " << x << endl;
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// using 'pbds' er pbds er name iccha moto newa jabe
// set hishabe use-> less<T>
// multiset hishabe use-> less_equal<T>
// order_of_key - position (koto gula less than key)
// find_by_order - element at pos k

void Rupalisaurus()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    pbds<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        s.insert(i + 1);
    }
    // allout(s);
    ll a;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        a--;
        auto it = s.find_by_order(a);
        ll ind = *it;
        // dbug(ind);
        cout << v[ind - 1] << " ";
        s.erase(ind);
    }
    cout << endl;
}

int32_t main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    fast_io;

    Rupalisaurus();
}