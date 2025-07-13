#include <iostream>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll k = n / m;
        ll sum = m * k * (k + 1) / 2;
        cout << sum << endl;
    }
    return 0;
}