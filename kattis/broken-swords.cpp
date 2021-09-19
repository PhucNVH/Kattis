#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num_swords=0;
    int totalTB=0;
    int totalLR=0;
    cin >> num_swords;
    int TB = 0;
    int LR = 0;
    for(int i=0;i<num_swords;i++){
        string broken_sword = "";
        cin >> broken_sword;
        TB += (broken_sword[0]-'0')==0?1:0;
        TB += (broken_sword[1]-'0')==0?1:0;
        LR += (broken_sword[2]-'0')==0?1:0;
        LR += (broken_sword[3]-'0')==0?1:0;
    }
    cout << min(TB/2,LR/2) << " " << TB-min(TB/2,LR/2)*2 << " " << LR-min(TB/2,LR/2)*2;
    return 0;
}