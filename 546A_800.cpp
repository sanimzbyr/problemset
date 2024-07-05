#include <iostream>
using namespace std;

int main () {
    int k;
    int w;
    long n;
    long cost=0;
    long loan=0;
    
    cin >> k >> n >> w;

    for(int i=1; i<=w; i++) {
        cost += k*i;
    }
    if(cost<=n) cout << "0";
    else{
        loan = cost-n;
        cout << loan;
    }
    return 0;
}