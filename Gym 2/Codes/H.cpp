#include <iostream>
using namespace std;

int main()
{
    int N, H, count = 0, x;
    cin >> N >> H;
    while (N--)
    {
        cin >> x;
        if (x <= H)
            count++;
    }
    cout << count << endl;
    return 0;
}
