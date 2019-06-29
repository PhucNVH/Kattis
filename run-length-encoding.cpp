#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    string output="";
    getline(cin, input);
    if (input[0] == 'E'){
        int counter =1;
        for(int i=2;i<input.length();i++){
            if(input[i]==input[i+1]){
                counter++;
            } else {
                output += input[i] + to_string(counter);
                counter = 1;
            }
        }
        cout << output;
    }
    else if (input[0] == 'D'){
        for(int i=2;i<input.length();i+=2){
            for(int j=0; j < input[i+1] - '0'; j++){
                output+=input[i];
            }
        }
        cout << output;
    }
        return 0;
}