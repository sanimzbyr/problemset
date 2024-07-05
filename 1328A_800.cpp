#include <iostream>

using namespace std;

int main() {
    int t;
    int a[10000];
    int b[10000];

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> a[i] >> b[i];
    }
    int count_a[10000]={0};
    for(int i=0; i<t; i++) {
        if (a[i] % b[i] != 0) {
            count_a[i] = b[i] - (a[i] % b[i]);
        } else {
            count_a[i] = 0;
        }
    }
    for(int i=0; i<t; i++){
        cout << count_a[i] << endl;
    }
    return 0;
}