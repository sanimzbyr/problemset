#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int n;
    int i;
    string s;
    cin >> n;
    for(i=0; i<n; i++) {
        cin >> s;
        if(s=="X++" || s=="++X") x++;
        else if(s=="X--" || s== "--X") x--;
    }
    cout << x;
    return 0;
}