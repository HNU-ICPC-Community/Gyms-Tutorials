#include <iostream>
using namespace std;

int main()
{
    int A1, P1, A2, P2;
    cin >> A1 >> P1 >> A2 >> P2;

    int TotalA = A1 + A2;
    int TotalP = P1 + P2;

    if (TotalA > TotalP)
        cout << "A" << endl;
    else if (TotalP > TotalA)
        cout << "P" << endl;
    else
        cout << "D" << endl;

    return 0;
}