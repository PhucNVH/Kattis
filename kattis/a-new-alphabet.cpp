#include <iostream>
#include <string>
using namespace std;
char easytolower(char in) {
  if(in <= 'Z' && in >= 'A'){
    return (char) in - ('Z' - 'z');}
  return in;
}
int main()
{
    string Map[26] = {"@", "8", "(", "|)", "3", "#", "6", "[-]", "|", "_|", "|<", "1", "[]\\/[]", "[]\\[]", "0", "|D", "(,)", "|Z", "$", "']['", "|_|", "\\/", "\\/\\/", "}{", "`/", "2"};
    string input;
    string output = "";
    getline(cin, input);
    for (int i = 0; i < input.length(); i++)
    {
         if (easytolower(input[i]) - 'a' < 0)
        {
            output += input[i];
        }
        else
        {
            output += Map[easytolower(input[i]) - 'a'];
        }
    }
    cout << output;
    return 0;
}