#include <iostream>
#include <string>


using namespace std;
int main () {
    int n, t;
    string s;

    cin >> n >> t;
    cin >> s;
    int j =0;
    while(j<t) {
        for(int i=0; i<n-1; i++) {
            if(s[i]=='B' && s[i+1]=='G') {
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
        }
        j++;
    }
    cout << s;
    return 0;
}