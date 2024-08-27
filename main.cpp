#include <iostream>
#include <cstdio>

using namespace std;

class Character {
private:
    string name;
    int health;

public:
    Character(string characterName) : name(characterName), health(100) {}

    void displayStatus() {
        cout << "Character: " << name << endl;
        cout << "Health: " << health << endl;
    }
};

int main() {
    string playerName;
    cout << "Enter your character's name: ";
    getline(cin, playerName);

    Character player(playerName);
    player.displayStatus();

    return 0;
}