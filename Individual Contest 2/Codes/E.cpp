#include <iostream>
using namespace std;
#define ll long long

void solve()
{
    ll a, b, c, n;
    cin >> a >> b >> c >> n;
    n -= min(c, n / 100) * 100;
    n -= min(b, n / 10) * 10;
    cout << (n <= a ? "YES" : "NO") << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
