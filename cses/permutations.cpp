#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> a;
    if (n == 1)
    {
        cout << "1" << endl;
    }
    else if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        if (n % 2 == 0)
        {
            for (long long i = 2; i <= n; i += 2)
            {
                cout << i << " ";
            }
            for (long long i = 1; i <= n - 1; i += 2)
            {
                cout << i << " ";
            }
        }
        else
        {
            for (long long i = 1; i <= n; i += 2)
            {
                cout << i << " ";
            }
            for (long long i = 2; i <= n - 1; i += 2)
            {
                cout << i << " ";
            }
        }
    }

    cout << endl;
    return 0;
}