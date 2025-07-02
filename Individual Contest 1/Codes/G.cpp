#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll W, int n, int m, const vector<ll> &a)
{
    int trips = 0;
    int current_index = 0;
    while (current_index < n)
    {
        trips++;
        ll start_time = a[current_index];
        ll delivery_window_end = start_time + W;
        while (current_index < n && a[current_index] <= delivery_window_end)
        {
            current_index++;
        }
    }
    return trips <= m;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    ll low = 0;
    ll high = 2000000000LL;
    ll ans = high;

    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        if (check(mid, n, m, a))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}