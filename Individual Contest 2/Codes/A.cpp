#include <bits/stdc++.h>
using namespace std;
#define ll long long
void Solve()
{
    int M, N, P, Q;
    bool flag = false;
    cin >> M >> N >> P >> Q;

    ll given = 2LL * M * N;
    ll target = 1LL * P * Q;

    if (target > given)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }

    if ((P <= 2 * M and Q <= N) || (P <= M and Q <= 2 * N))
    {
        flag = true;
    }
    if ((Q <= 2 * M and P <= N) || (Q <= M and P <= 2 * N))
    {
        flag = true;
    }

    cout << given - target << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solve();

    time;
    return 0;
}