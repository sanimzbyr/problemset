#include <iostream>
#include <string>
#include<cctype>
using namespace std;

int main () {
    string str1, str2;

    getline(cin, str1);
    getline(cin, str2);

    for(char &c : str1){
        c = tolower(c);
    }
    for(char &d : str2) {
        d = tolower(d);
    }
    int i;
    if(str1>str2) cout << "1";
    else if(str1<str2) cout << "-1";
    else if(str1==str2) cout << "0";

    return 0;
}