#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        ll gcd_a = a[0];
        for (int i = 1; i < n; ++i)
        {
            gcd_a = gcd(gcd_a, a[i]);
        }

        ll gcd_b = b[0];
        for (int i = 1; i < n; ++i)
        {
            gcd_b = gcd(gcd_b, b[i]);
        }

        if (gcd_a == gcd_b)
        {
            cout << 0 << "\n";
            continue;
        }

        int operations = 0;
        if (gcd_a < gcd_b)
        {
            if (gcd_b % gcd_a == 0)
            {
                operations = 1;
            }
            else
            {
                operations = 2;
            }
        }
        else
        {
            if (gcd_a % gcd_b == 0)
            {
                operations = 1;
            }
            else
            {
                operations = 2;
            }
        }
        cout << operations << "\n";
    }
    return 0;
}