#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long total = (long long)n * (n + 1) / 2;
    long long sum = 0;
    while (--n > 0)
    {
        long long x;
        cin >> x;
        sum += x;
    }
    cout << total - sum << "\n";
}