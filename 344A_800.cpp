#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string polarity[100000];

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> polarity[i];
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if ((polarity[i] == "10" && polarity[i+1] == "01") ||
            (polarity[i] == "01" && polarity[i+1] == "10")) {
            count++;
        }
    }

    cout << count;

    return 0;
}
