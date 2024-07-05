#include <iostream>


using namespace std;

int main ( ) {
    int n;
    int difficulty[100];
    cin >> n;

    for(int i=0;i<n; i++) {
        cin >> difficulty[i];
    }
    int count = 0;
    for(int i=0; i<n; i++) {
        if(difficulty[i]==1) count ++;
    }
    if(count>=1){
        cout << "HARD";
    }
    else cout << "EASY";

    return 0;
}