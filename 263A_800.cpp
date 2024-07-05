#include <iostream>
using namespace std;

int main () {
    int arr[5][5];
    int i,j;
    
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            cin >> arr[i][j];
        }
    }
    if((arr[0][0]||arr[4][0]||arr[0][4]||arr[4][4])==1) cout << 4;
    else if((arr[0][1]||arr[0][3]||arr[1][0]||arr[1][4]||arr[3][0]||arr[3][4]||arr[4][1]||arr[4][3])==1) cout << 3;
    else if((arr[0][2]||arr[1][1]||arr[1][3]||arr[2][0]||arr[2][4]||arr[3][1]||arr[3][3]||arr[4][2])==1) cout << 2;
    else if((arr[1][2]||arr[2][1]||arr[2][3]||arr[3][2])==1) cout <<1;
    else if(arr[2][2]==1) cout << 0;

    return 0;
}