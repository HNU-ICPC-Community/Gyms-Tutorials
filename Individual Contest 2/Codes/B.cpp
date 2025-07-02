#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }

    vector<int> valley_bottoms;
    for (int i = 1; i < n - 1; ++i) {
        if (h[i] < h[i-1] && h[i] < h[i+1]) {
            valley_bottoms.push_back(h[i]);
        }
    }

    if (valley_bottoms.size() == 2) {
        cout << max(valley_bottoms[0], valley_bottoms[1]) << endl;
    } else {
        cout << "Error: Did not find exactly two valley bottoms." << endl;
    }

    return 0;
}
