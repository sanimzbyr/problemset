#include <iostream>
#include <array>
#define SZ 100
using namespace std;



int main () {
    int i, n, k;
    int score[SZ];
    int count = 0;

    cin >> n >> k;
    for(i=1; i<=n; i++) {
        cin >> score[i];
    }
    for(i=1; i<=n; i++) {
        if((score[i]!=0) && (score[i]>=score[k])) count++;
    }
    cout << count;
    return 0;
}