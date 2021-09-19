#include <iostream>
#include <string>

using namespace std;

int powerOfTwo(int num){
    int result = 1;
    while(num--){
        result *=2;
    }
    return result;
}
int main()
{
    int height;
    cin >> height;
    int current = powerOfTwo(height+1)-1;
    string path;
    int counter = 1;
    cin >> path;
    for(int i=0;i<path.length();i++){
        if(path[i]=='L'){
            current-=counter;
            counter*=2;
        }
        else if (path[i]=='R'){
            current=current-counter-1;
            counter=counter*2+1;
        }
    }
    cout << current;
    return 0;
} 