#include <iostream>
#include <map>
#include <string>
#include <iterator>
 using namespace std;
int main()
{
    map<std::string, int> Key_to_Point;
    
    int num_key, num_paragraph;
    cin >> num_key >> num_paragraph;
    while(num_key--){
        string key;
        int value = 0;
        cin >> key >> value;
        Key_to_Point.insert(make_pair(key,value));
    }
    while(num_paragraph--){
        int salary = 0;
        while(true){
            string word;
            cin >> word;
            if(word == "."){
                break;
            } else {
                map<std::string, int>::iterator it = Key_to_Point.find(word);
                if(it!=Key_to_Point.end()){
                    salary += it->second;
                }
            }
        }
        cout << salary << endl;
    }
    return 0;
}