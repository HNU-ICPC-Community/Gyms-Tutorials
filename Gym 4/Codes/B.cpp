#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    string result;
    int i = 0;
    while (i < n)
    {
        int remaining = n - i;
        int group_size;
        if (remaining == 4)
        {
            group_size = 2;
        }
        else if (remaining == 3)
        {
            group_size = 3;
        }
        else
        {
            group_size = 2;
        }
        if (!result.empty())
            result += '-';
        result += s.substr(i, group_size);
        i += group_size;
    }
    cout << result << endl;
    return 0;
}