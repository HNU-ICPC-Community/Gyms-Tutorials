#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int count8 = 0;
    for (char c : s) {
        if (c == '8') count8++;
    }

    int maxPhones = min(count8, n / 11);
    cout << maxPhones << endl;

    return 0;
}