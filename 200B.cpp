#include <iostream>

using namespace std;

int main () {
    int n;
    double count = 0;
    int percentage[100];
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> percentage[i];
    }
    for(int i=0; i<n; i++) {
        count += percentage[i];
    }
    cout << count/n;
    return 0;
    
}