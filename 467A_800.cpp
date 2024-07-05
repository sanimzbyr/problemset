#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    int p[100];
    int q[100];
    int diff[100];
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> p[i] >> q[i];
    }

    for(int i=0; i<n; i++) {
        diff[i]=q[i]-p[i];
        if(diff[i] >=2) count++;
    }
    cout << count;
    return 0;
}