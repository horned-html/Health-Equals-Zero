#include <iostream>

using namespace std;

int main() {
    bool done = false;

    string input = "";

    int wizardHealth = 100;
    int playerHealth = 100;

    cout << "\n\tHealth Equals Zero\n\n";
    while (!done) {
        cout << "Wizard HP: " << wizardHealth << ".\n";
        cout << "Player HP: " << playerHealth << ".\n";
        cout << "Enter X to exit.\n";
        cin >> input;
        if (input == "X" or input == "x") {
            done = true;
        }
    }
    return 0;
}