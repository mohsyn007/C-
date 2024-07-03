#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const long long MOD = 998244353;
#define sz(x) (ll)(x).size()
#define rd ({ll x; cin >> x; x; })
#define dbg(x) cerr << (#x) << " = " << (x) << endl
// #define cerr if(0)cerr
#define xx first
#define yy second

void Solve()
{
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    a %= MOD;
    b %= MOD;
    c %= MOD;
    d %= MOD;
    e %= MOD;
    f %= MOD;
    ll ans = ((a * b % MOD) * c % MOD - (d * e % MOD) * f % MOD + MOD) % MOD;
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
        Solve();
    return 0;
}