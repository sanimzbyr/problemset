#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int arr_3[100]={0};
    int r;
    cin >> r;
    for(int i=1; i<=r; i++) {
        cin >> arr_3[i];
    }
    sort(arr_3+1, arr_3+r+1);
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
    for(int i=1; i<=r; i++) {
        cout << arr_3[i] << " ";
    }

    return 0;

}
/*

for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                // Shift elements to the left
                for (int k = j; k < size - 1; ++k) {
                    arr[k] = arr[k + 1];
                }
                --size; // Decrease the size of the array
                --j; // Adjust the index to check the new element at position j
            }
        }
    }

*/