#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
ll power(ll a, ll b) // always use binary exp
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a);
        }
        a = (a * a);
        b >>= 1;
    }
    return res;
}
void Rupalisaurus()
{
    ll n;
    cin >> n; // 200
    ll numcnt = 0, digitase = 0;
    ll num, ind, div, rem;
    string s;
    for (ll d = 1; d <= 150; d++) // 3
    {
        numcnt = 9 * power(10, d - 1); // 900
        digitase = numcnt * d;         // 2700

        if (n > digitase)
            n -= digitase;
        else
        {
            div = (n - 1) / d; // 10/3=3
            rem = (n - 1) % d; // 10%3=1

            num = power(10, d - 1) + div; // 100+3=103
            s = to_string((ll)num);

            cout << s[rem] << endl;
            return;
        }
    }
}

int32_t main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    fast_io;

    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        // cout<<"Case "<< ++tc <<": ";
        Rupalisaurus();
    }
}