#include <iostream>
#include <algorithm>
#include <iterator>
#define sz 1000
using namespace std;

int main() {
    int n, a[sz], b[sz], count[sz]={0};
    cin >>n;
    for(int i=0; i<n; i++) {
        cin >> a[i] >> b[i];
    }

    for(int i=0; i<n; i++){
        if(i==0) {
            count[i] = b[i] - a[i];
        }
        else{
            count[i] = b[i] - a[i] + count[i-1];
        }
    }
    //ai=no. of passengers exiting the tram at ith stop
    //bi=no. of passengers entering the tram at ith stop
    int maxElement = *max_element(begin(count), end(count));

    cout << maxElement;
    return 0;
}