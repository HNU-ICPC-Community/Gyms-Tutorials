#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n), b;
    for (ll &v : a)
        cin >> v;

    ll cur = -1;
    for (ll v : a)
    {
        if ((v & x) == x)
        {
            b.push_back(v);
            if (cur == -1)
                cur = v;
            else
                cur &= v;
        }
    }

    cout << ((b.empty() || cur != x) ? "-1" : to_string(b.size())) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
