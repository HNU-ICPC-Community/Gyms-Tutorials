#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll R, G, B;
    cin >> R >> G >> B;
    ll result = (R + 1) * (G + 1) * (B + 1);
    cout << result << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}