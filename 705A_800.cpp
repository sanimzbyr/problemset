#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    if(n==1){
        cout << "I hate ";
    }
    else if(n>=2){
        if(n%2==0){
            for(int i=1; i<=n/2; i++) {
                cout<< "I hate that I love ";
                if(i<n/2) {
                    cout << "that ";
                }
            }
            
        }
        if(n%2!=0) {
            for(int i=1; i<=(n+1)/2; i++) {
                cout << "I hate ";
                if(i<(n+1)/2){
                    cout << "that I love that ";
                }
            }
        }
    } 
    cout << "it";
    return 0;
}