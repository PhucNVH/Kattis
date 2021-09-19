#include <iostream>
#include <string>
#include <map>
#include <iterator>
using namespace std;

map<char, int> Key_to_Point;

long power_of_27(int exp)
{
    long rs = 1;
    while (exp--)
    {
        rs *= 27;
    }
    return rs;
}
long to_base_10(int *list)
{
    return list[0] * power_of_27(7) + list[1] * power_of_27(6) + list[2] * power_of_27(5) + list[3] * power_of_27(4) + list[4] * power_of_27(3) + list[5] * power_of_27(2) + list[6] * power_of_27(1) + list[7]*1;
}


bool checkValidCode(char nineth, int *list)
{
    int validCode = 0;
    map<char, int>::iterator it = Key_to_Point.find(nineth);
    if (it != Key_to_Point.end())
    {
        validCode = (2 * list[0] + 4 * list[1] + 5 * list[2] + 7 * list[3] + 8 * list[4] + 10 * list[5] + 11 * list[6] + 13 * list[7]) % 27;
    }
    if (validCode == it->second)
        return true;
    else
        return false;
}


int main()
{
    Key_to_Point.insert(make_pair('0', 0));
    Key_to_Point.insert(make_pair('1', 1));
    Key_to_Point.insert(make_pair('2', 2));
    Key_to_Point.insert(make_pair('3', 3));
    Key_to_Point.insert(make_pair('4', 4));
    Key_to_Point.insert(make_pair('5', 5));
    Key_to_Point.insert(make_pair('6', 6));
    Key_to_Point.insert(make_pair('7', 7));
    Key_to_Point.insert(make_pair('8', 8));
    Key_to_Point.insert(make_pair('9', 9));
    Key_to_Point.insert(make_pair('A', 10));
    Key_to_Point.insert(make_pair('C', 11));
    Key_to_Point.insert(make_pair('D', 12));
    Key_to_Point.insert(make_pair('E', 13));
    Key_to_Point.insert(make_pair('F', 14));
    Key_to_Point.insert(make_pair('H', 15));
    Key_to_Point.insert(make_pair('J', 16));
    Key_to_Point.insert(make_pair('K', 17));
    Key_to_Point.insert(make_pair('L', 18));
    Key_to_Point.insert(make_pair('M', 19));
    Key_to_Point.insert(make_pair('N', 20));
    Key_to_Point.insert(make_pair('P', 21));
    Key_to_Point.insert(make_pair('R', 22));
    Key_to_Point.insert(make_pair('T', 23));
    Key_to_Point.insert(make_pair('V', 24));
    Key_to_Point.insert(make_pair('W', 25));
    Key_to_Point.insert(make_pair('X', 26));
    Key_to_Point.insert(make_pair('B', 8));
    Key_to_Point.insert(make_pair('G', 11));
    Key_to_Point.insert(make_pair('I', 1));
    Key_to_Point.insert(make_pair('O', 0));
    Key_to_Point.insert(make_pair('Q', 0));
    Key_to_Point.insert(make_pair('S', 5));
    Key_to_Point.insert(make_pair('U', 24));
    Key_to_Point.insert(make_pair('Y', 24));
    Key_to_Point.insert(make_pair('Z', 2));
    
    int total_case;
    cin >> total_case;
    while (total_case--)
    {
        int num_case;
        cin >> num_case;
        string code = "";
        string decode = "";
        cin >> code;
        int *code_num_arr = new int[9];
        int i;
        for (i = 0; i < 8; i++)
        {
            map<char, int>::iterator it = Key_to_Point.find(code[i]);
            if (it != Key_to_Point.end())
            {
                code_num_arr[i] = it->second;
            }
        }
        if (checkValidCode(code[8], code_num_arr))
        {
            cout << num_case << " " << to_base_10(code_num_arr) << endl;
        }
        else
        {
            cout << num_case << " "
                 << "Invalid" <<endl;
        }
    }
    return 0;
}