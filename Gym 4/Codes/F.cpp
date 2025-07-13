#include <bits/stdc++.h>
using namespace std;
int result;
int main()
{
    int x, y, z, n;
    cin >> x >> y >> z >> n;
    int total_classes = x * y;
    int required_classes = (total_classes * 3 + 4) / 5;
    int weeks_remaining = x - z;
    int classes_needed = required_classes - n;
    int max_possible = weeks_remaining * y;
    if (classes_needed <= max_possible)
    {
        cout << "Yes\n";
        vector<int> result(weeks_remaining, 0);
        int remaining = classes_needed;
        for (int i = weeks_remaining - 1; i >= 0 && remaining > 0; i--)
        {
            int classes = min(y, remaining);
            result[i] = classes;
            remaining -= classes;
        }

        for (int i = 0; i < weeks_remaining; i++)
        {
            cout << result[i] << (i < weeks_remaining - 1 ? " " : "\n");
        }
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}