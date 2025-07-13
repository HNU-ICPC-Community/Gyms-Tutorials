#include <bits/stdc++.h>
using namespace std;

struct Iguana
{
    int id;
    long long scales, colors;
};

bool cmp(const Iguana &a, const Iguana &b)
{
    long long x = a.scales * b.colors, y = b.scales * a.colors;
    return x != y ? x > y : a.id > b.id;
}

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    vector<Iguana> v(n);
    for (int i = 0; i < n; ++i)
        v[i] = {i + 1, a[i], b[i]};

    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < 3; ++i)
        cout << v[i].id << '\n';
}
