#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main()
{
    ll N, M, P1, P2, Q1, Q2;
    cin >> N >> M >> P1 >> P2 >> Q1 >> Q2;
    vector<ll> a(M);
    for (ll &x : a)
        cin >> x;

    ll total = 0;
    for (ll ai : a)
    {
        ll cost1 = P2 + max(0LL, ai - P1 + Q1 - 1) / Q1 * Q2;
        ll cost2 = (ai + Q1 - 1) / Q1 * Q2;
        total += min(cost1, cost2);
    }
    cout << (total < N ? "YES" : "NO") << endl;
}
