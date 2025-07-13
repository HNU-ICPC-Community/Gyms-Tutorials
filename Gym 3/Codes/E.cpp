#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t)
    {
        ll h1, m1, s1;
        cin >> h1 >> m1 >> s1;
        int h2, m2, s2;
        cin >> h2 >> m2 >> s2;

        ll total_seconds1 = h1 * 3600 + m1 * 60 + s1;
        ll total_seconds2 = h2 * 3600 + m2 * 60 + s2;

        cout << "Case " << t << ": ";
        if (total_seconds1 == total_seconds2)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}