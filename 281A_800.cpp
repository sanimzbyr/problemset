#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string input;
    
    // Prompt the user to enter a string
    getline(cin, input);

    // Capitalize the first letter of the input string
    input[0] = toupper(input[0]);

    // Print the result
    cout << input << endl;

    return 0;
}
