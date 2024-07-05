#include <iostream>
#include <sstream> // for std::istringstream
#include <vector> // for std::vector (optional)
using namespace std;

int main() {
    int n, i;
    cin >> n;

    int count = 0;

    for(i=0; i<n; i++) {
        string line;
        getline(std::cin, line);

        istringstream iss(line);
        int num1, num2, num3;
        iss >> num1 >> num2 >> num3;
        if((num1+num2+num3) >= 2) count++;
    }
    cout << count;
    return 0;
}