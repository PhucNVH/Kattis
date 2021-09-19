#include <iostream>
#include <vector>
using namespace std;

void printPerm(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void perm(vector<int> v, bool checked[], int n)
{
    if (n == v.size())
    {
        printPerm(v);
    }
    for (int i = 1; i <= n; i++)
    {
        if (checked[i])
            continue;
        v.push_back(i);
        checked[i] = true;
        perm(v, checked, n);
        checked[i] = false;
        v.pop_back();
    }
}

int main()
{

    int n;
    cin >> n;
    vector<int> a;
    bool checked[n];
    for (int i = 0; i < n; i++)
    {
        checked[i] = false;
    }
    perm(a, checked, n);
}
