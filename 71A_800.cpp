#include <iostream>
#include <string>
#define SIZE 150
using namespace std;


int main () {
    int i, n;
    char firstElement[SIZE];
    char lastElement[SIZE];
    string st[SIZE];
    size_t numberOfelements[SIZE];
    
    cin >> n;
    for(i=0; i<n; i++) {
        cin >> st[i];
    }
    for(i=0; i<n; i++) {

        if(st[i].length() > 10) {
            firstElement[i] = st[i].front();
            lastElement[i] = st[i].back();
            numberOfelements[i] = (st[i].length()-2);
            cout << firstElement[i] << numberOfelements[i] << lastElement[i] << endl;
        }
        else cout << st[i] << endl;
    }
    return 0;
}