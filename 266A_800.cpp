#include <iostream>
#include <string>
using namespace std;
int main () {
    int n, count = 0;
    string s;
    cin >> n >> s;
    for (size_t i = 0; i < s.length(); ++i) {
        if(s[i] == s[i+1]) count++;
    }
    cout << count;
    return 0;
}