#include <iostream>
#include <string>
using namespace std;

int main() {
    string num1, num2;
    cin >> num1 >> num2;
    string num3(num1.length(), '0');
    for(int i=0; i<num1.length(); i++) {
        if(num1[i]==num2[i]){
            num3[i] = '0';
        }
        else num3[i] = '1';
    }
    cout << num3;
    return 0;
}