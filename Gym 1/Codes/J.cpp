#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b || b == c || a == c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    freopen("equal.in", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}