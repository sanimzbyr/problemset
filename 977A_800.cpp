#include <iostream>
using namespace std;
int main(){
  int n, k, i;
  cin >> n >> k;
  for(i=0; i<k; i++){
    if((n%10)!=0) {n -= 1;}
    else if((n%10)==0) {n /= 10;}
  }
  cout << n;
  return 0;
}