#include <iostream>
using namespace std;

int main() {
    long s[4];
    for(int i=0; i<4; i++) {
        cin >> s[i];
    }
    int count = 0;
    for(int i=0; i<4; i++){
        if(s[i]==s[i-1]) count++;
        if(s[i]==s[i-2]) count++;
        if(s[i]==s[i-3]) count++;
    }
    cout  << count;
    return 0;

}