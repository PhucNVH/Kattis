#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    while (n--)
    {
        long long x, y;
        cin >> x >> y;
        long long max = x > y ? x : y;
        long long num = max * max;
        if (max % 2 == 0)
        {
            cout << num - ((max - x) + (y - 1));
        }
        else
        {
            cout << num - ((max - y) + (x - 1));
        }
        cout << endl;
    }

    return 0;
}