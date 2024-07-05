#include <iostream>
using namespace std;

bool uniqueYear(int x) {
    int myArr[4];
    for(int i=0; i<4; i++) {
            myArr[i] = x%10;
            x = x/10;
        
        }
        int a = myArr[3];
        int b = myArr[2];
        int c = myArr[1];
        int d = myArr[0];
        
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            return true;
        }
        return false;
}

int main() {
    int y;
    cin >> y;
    while(1) {
        y++;
        if(uniqueYear(y)) {
            cout << y;
            break;
        }
    }
    return 0;
}