#include <iostream>
#include <algorithm>
#define SIZE 150
using namespace std;

int main() {
    int levels;
    cin >> levels;

    int p;
    cin >> p;
    int arr_1[SIZE];
    for(int i=1; i<=p; i++) {
        cin >> arr_1[i];
    }

    int q;
    cin >> q;
    int arr_2[SIZE];
    for(int i=1; i<=q;i++) {
        cin >> arr_2[i];
    }

    int arr_3[250]={0};

    int index_1 = 1;
    int index_2 = 1;
    int merge_index = 1;
    while(index_1<=p) {
        arr_3[merge_index] = arr_1[index_1];
        index_1++;
        merge_index++;
    }
    while(index_2<=q){
        arr_3[merge_index] = arr_2[index_2];
        index_2++;
        merge_index++;
    }

    int r = p+q;
    sort(arr_3+1, arr_3+(r+1));

    for(int i=1; i<=r; i++){
        for(int j=i+1; j<=r; j++) {
            if(arr_3[i]==arr_3[j]) {
                //shift elements to the left
                for(int k=j; k<=r-1; k++) {
                    arr_3[k] = arr_3[k+1];
                }
                r--;// Decrease the size of the array
                j--;// Adjust the index to check the new element at position j
            
            }
        }
    }

    int count = 0;
    for(int i=1; i<=levels; i++) {
        if(arr_3[i]!=i) count++;
    }
    if(count==0) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
    return 0;

}