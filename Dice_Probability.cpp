#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fix(n, val) fixed << setprecision(n) << val
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

#define ld long double

// dp[n][s] = (1/6) * summation of dp[n-1][s-c] where c = 1...6
// ans will be dp[n][s] where s = a...b

void Rupalisaurus()
{
    ll n, a, b;
    cin >> n >> a >> b;

    vector<vector<ld>> dp(n + 1, vector<ld>(6 * n + 1, 0));
    dp[0][0] = 1;

    for (ll i = 1; i <= n; i++) // 100
    {
        for (ll s = 1; s <= 6 * n; s++) // 600
        {
            for (ll c = 1; c <= 6; c++) // 6
            {
                if (s - c >= 0)
                {
                    dp[i][s] += dp[i - 1][s - c];
                }
            }
            dp[i][s] /= 6.0;
        }
    }

    ld ans = 0.0;
    for (ll s = a; s <= b; s++)
    {
        ans += dp[n][s];
    }

    ans = rint(ans * 1e6) / 1e6;

    cout << fix(6, ans) << endl;
}

int32_t main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    fast_io;

    Rupalisaurus();
}