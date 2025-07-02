#include <bits/stdc++.h>
using namespace std;

#define ll long long

void test_case()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll same = 1, cnt = 0;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            same = 0;
        same++;
        if (same >= 3)
            cnt += same - 2;
    }
    for (ll i = 0; i < n; i += 2)
        s[i] = '1' + '0' - s[i];
    same = 1;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            same = 0;
        same++;
        cnt += (same - 1) / 2;
    }
    cout << cnt << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
        test_case();
}