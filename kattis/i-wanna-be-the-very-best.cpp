#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

struct pokemon
{
    int id;
    long long attack;
    long long defense;
    long long health;
    pokemon(int i, long long a, long long d, long long h) : id(i), attack(a), defense(d), health(h) {}
};
struct attack
{
    inline bool operator()(const pokemon &struct1, const pokemon &struct2)
    {
        return (struct1.attack >= struct2.attack);
    }
};
struct defense
{
    inline bool operator()(const pokemon &struct1, const pokemon &struct2)
    {
        return (struct1.defense >= struct2.defense);
    }
};
struct health
{
    inline bool operator()(const pokemon &struct1, const pokemon &struct2)
    {
        return (struct1.health >= struct2.health);
    }
};
int main()
{
    vector<pokemon> PokeList;
    set<int> team;
    int result = 0;
    int N, K;
    int id = 0;
    cin >> N >> K;
    while (N--)
    {
        long long attack, defense, health;
        cin >> attack >> defense >> health;
        PokeList.push_back(pokemon(id, attack, defense, health));
        id++;
    }

    //search best attack
    int counter = 0;
    sort(PokeList.begin(), PokeList.end(), attack());
    auto it = PokeList.begin();
    for (int i = 0; i < K; i++)
    {
        team.insert(it->id);
        ++it;
    }

    //search best defense
    counter = 0;
    sort(PokeList.begin(), PokeList.end(), defense());
    it = PokeList.begin();
    for (int i = 0; i < K; i++)
    {
        team.insert(it->id);
        ++it;
    }
    //search best health
    counter = 0;
    sort(PokeList.begin(), PokeList.end(), health());
    it = PokeList.begin();
    for (int i = 0; i < K; i++)
    {
        team.insert(it->id);
        ++it;
    }
    cout << team.size() << endl;
    return 0;
}