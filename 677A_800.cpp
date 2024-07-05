#include <iostream>


using namespace std;
int main() {
    int n, h;
    int a[1000];
    int count = 0;
    cin >> n >> h;
    
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<n; i++) {
        if(a[i]<=h) {count += 1;}
        else if(a[i]>h) {count += 2;}
    }
    cout << count;
    return 0;
}