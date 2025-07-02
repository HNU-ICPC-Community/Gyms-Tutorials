#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int zeros = 0;
    int non_zeros = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            zeros++;
        }
        else
        {
            non_zeros++;
        }
    }

    ll num_discount_teams = non_zeros / 3;
    ll cost = num_discount_teams * 2000;

    ll remaining_participants = n - (num_discount_teams * 3);
    ll num_full_price_teams = remaining_participants / 3;
    cost += num_full_price_teams * 3000;

    cout << cost << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
