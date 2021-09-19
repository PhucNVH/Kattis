#include <iostream>
#include <string>

int main()
{
    using namespace std;
    const string pattern = "simon says";
    int numOfStr = 0;
    string inputStr = "";
    cin >> numOfStr;
    getline(cin, inputStr);

    for (int i = 0; i < numOfStr; i++)
    {
        getline(cin, inputStr);
        if (inputStr.length() > 10 && inputStr.substr(0, 10).compare(pattern) == 0)
        {
            cout << inputStr.substr(11);
        }
        cout << '\n';
    }
    return 0;
}