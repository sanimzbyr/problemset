#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    set<char> distinctCharacters;

    for (char ch : input) {
        distinctCharacters.insert(ch);
    }

    int length = distinctCharacters.size();

    if((length%2) != 0) cout << "IGNORE HIM!" << endl;
    else if((length%2) == 0) cout << "CHAT WITH HER!" << endl;


    return 0;
}
