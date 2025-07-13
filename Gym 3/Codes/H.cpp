#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<int> freqL(26, 0), freqR(26, 0);
    vector<int> oddL(n), oddR(n);

    int oddCount = 0;
    for (int i = 0; i < n; ++i)
    {
        int c = s[i] - 'a';
        freqL[c]++;
        if (freqL[c] % 2 == 1)
            oddCount++;
        else
            oddCount--;
        oddL[i] = oddCount;
    }
    freqR.assign(26, 0);
    oddCount = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        int c = s[i] - 'a';
        freqR[c]++;
        if (freqR[c] % 2 == 1)
            oddCount++;
        else
            oddCount--;
        oddR[i] = oddCount;
    }
    int count = 0;
    for (int i = 1; i < n; ++i)
    {
        if (oddL[i - 1] <= 1 && oddR[i] <= 1)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
