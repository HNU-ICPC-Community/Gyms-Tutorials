#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int &x : a)
            cin >> x;
        for (int &x : b)
            cin >> x;
        ll sum_b = 0;
        for (int x : b)
            sum_b += x;
        ll ans = 2LL * a[n - 1] - sum_b;
        ll sa = 0, sb = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            sa += a[i];
            sb += b[i];
            ll option1 = (sa - a[n - 1]) - (sb - b[i]);
            ll option2 = sa - (sum_b - b[n - 1]);
            ans = max(ans, min(option1, option2));
        }
        cout << ans << endl;
    }
    return 0;
}
