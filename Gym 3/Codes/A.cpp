#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    map<int, vector<int>> pos;
    for (int i = 0; i < N; ++i)
    {
        int v;
        cin >> v;
        pos[v].push_back(i + 1);
    }

    for (int q = 0; q < Q; ++q)
    {
        int l, r, x;
        cin >> l >> r >> x;
        int ans = -1;
        if (pos.count(x))
        {
            const vector<int> &lst = pos[x];
            auto it = lower_bound(lst.begin(), lst.end(), l);
            if (it != lst.end() && *it <= r)
            {
                ans = *it;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}