#include<iostream>
using namespace std;

int main(){
    long n;
    string s;
    cin >> n >> s;
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i < n; i++){ 
        for(char c: s){
            if(c == 'A') count1++;
        }
        for(char c: s){
            if(c == 'D') count2++;
        }
        if(count1 > count2) cout << "Anton";
        else if(count1 < count2) cout << "Danik";
        else cout << "Friendship";

        return 0;

    }
}