#include <iostream>
using namespace std;

int main()
{

    long long n;
    cin >> n;
    long long total = 0;
    long long max = 0;
    cin >> max;
    while (n-- > 1)
    {
        long long x;
        cin >> x;
        if (x > max)
        {
            max = x;
        }
        total += max - x;
    }
    cout << total << "\n";
}