#include <iostream>
using namespace std;
int main () {
    int n;
    int num[100];
    int num_[100];

    cin >> n;

    for(int i=1; i<=n; i++) {
        cin >> num[i];
    }
    for(int i=1; i<=n; i++) {
        num_[num[i]] = i; 
    }
    for(int i=1; i<=n; i++) {
        cout << num_[i];
    }

    return 0;


}