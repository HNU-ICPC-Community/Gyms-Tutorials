#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;
    cin >> s;
    ll MOD = 1e9 + 7;

    ll count_a = 0;
    ll count_ab = 0;
    ll total_sequences = 0;

    for (char char_s : s)
    {
        if (char_s == 'a') {
            ll new_count_a = (1 + count_ab) % MOD;
            total_sequences = (total_sequences + new_count_a) % MOD;
            count_a = (count_a + new_count_a) % MOD;
        } else if (char_s == 'b') {
            count_ab = (count_ab + count_a) % MOD;
            count_a = 0;
        }
    }

    cout << total_sequences << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}