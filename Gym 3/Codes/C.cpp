#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const ld pi = acos(-1.0);

int main()
{
    int tc = 1;
    cin >> tc;

    while (tc--)
    {
        ld a, b, c;
        cin >> a >> b >> c;
        ld _a = asin(a) * 180 / pi;
        ld _b = asin(b) * 180 / pi;
        ld _c = asin(c) * 180 / pi;
        
        int A = round(_a), B = round(_b), C = round(_c);
        
        if (A + B + C == 180)
            cout << max({A, B, C}) << '\n';
        else if (A + B == C)
            cout << max({A, B, 180 - C}) << '\n';
        else if (A + C == B)
            cout << max({A, 180 - B, C}) << '\n';
        else if (B + C == A)
            cout << max({180 - A, B, C}) << '\n';
    }
    return 0;
}