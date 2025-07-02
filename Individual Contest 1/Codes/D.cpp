#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll res1 = a + b + c;
    ll res2 = a + b - c;
    ll res3 = a - b + c;
    ll res4 = a - b - c;

    ll max_res = max({res1, res2, res3, res4});

    cout << max_res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}