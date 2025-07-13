#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        if (N % 3 == 0 || N % 6 == 1)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}