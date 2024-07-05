#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s,t;
    getline(cin, s);
    getline(cin, t);

    reverse(s.begin(), s.end());

    if(s==t) cout << "YES";
    else cout << "NO";
    return 0;
}