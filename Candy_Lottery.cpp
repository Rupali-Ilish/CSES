#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fix(n, val) fixed << setprecision(n) << val
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

#define double long double

// formula
// E[x] = summation of m * P(X=m) where m = 1 .... k

void Rupalisaurus()
{
    double n, k;
    cin >> n >> k;
    double exp = 0.0; // expected value -> E[x]

    double less_eq_m, less_m, for_m;

    for (ll m = 1; m <= k; m++)
    {
        less_eq_m = pow((double)(m / k), n);  // (m/k)^n
        less_m = pow((double)(m - 1) / k, n); // ((m-1)/k)^n
        for_m = less_eq_m - less_m;
        exp += m * for_m;
    }

    // to round up for the 7th point
    exp = exp * 1e6;
    exp = rint(exp); // “round half to even” (also called banker’s rounding) -> 2.5 -> 2, 3.5 -> 4
    exp = exp / 1e6;

    cout << fix(6, exp) << endl;
}

int32_t main()
{
    fast_io;

    Rupalisaurus();
}