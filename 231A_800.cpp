#include <iostream>
using namespace std;
#define sz 1000

int main () {
    int n, x[sz], y[sz], z[sz], i;
    int count = 0;
    
    cin >> n;
    for(i=0; i<n; i++) {
        cin >> x[i] >> y[i] >> z[i];
        if((x[i]+y[i]+z[i]) >= 2) count++;
    }

    cout << count;
    return 0;
}