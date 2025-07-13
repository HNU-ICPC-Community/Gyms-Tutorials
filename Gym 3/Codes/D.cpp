#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    if (s.length() != t.length())
    {
        cout << "NO\n";
        return 0;
    }

    vector<int> diff_indices;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] != t[i])
        {
            diff_indices.push_back(i);
        }
    }

    if (diff_indices.empty())
    {
        cout << "YES\n";
        return 0;
    }

    string s_copy = s;
    reverse(s_copy.begin() + diff_indices[0], s_copy.begin() + diff_indices.back() + 1);

    if (s_copy == t)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}