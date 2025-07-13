#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int runs = 0;
    int current_index = 0;
    while (current_index < n)
    {
        runs++;
        ll delivery_time = a[current_index] + k;
        while (current_index < n && a[current_index] <= delivery_time)
        {
            current_index++;
        }
    }
    cout << runs << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}