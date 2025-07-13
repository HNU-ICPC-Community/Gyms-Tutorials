#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll count = 0;

    if (k == 0)
    {
        for (ll i = 1; i <= n; ++i)
        {
            count += min(n, i - 1);
        }
    }
    else
    {
        for (ll i = 1; i <= n; ++i)
        {
            ll lower_j = k * i;
            ll upper_j = (k + 1) * i - 1;

            ll actual_lower_j = max(1LL, lower_j);
            ll actual_upper_j = min(n, upper_j);

            if (actual_upper_j >= actual_lower_j)
            {
                count += (actual_upper_j - actual_lower_j + 1);
            }
        }
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}