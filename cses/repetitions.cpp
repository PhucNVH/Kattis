#include <iostream>
using namespace std;

int main()
{
    char c;
    int total = 1;
    int max = 1;
    char prev = getchar();
    while (c = getchar())
    {
        if (c == '\n')
        {
            break;
        }
        if (c == prev)
        {
            total++;
        }
        else
        {
            total = 1;
        }
        if (total > max)
        {
            max = total;
        }
        prev = c;
    }
    cout << max << "\n";
}