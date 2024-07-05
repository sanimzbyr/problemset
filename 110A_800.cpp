#include <iostream>
#include <cmath>
using namespace std;

int main() {
  long long n;
  int i, count=0;
  cin >> n;

  int digits = static_cast<int>(log10(abs(n))) + 1;

  for(i=0; i<digits; i++){
    if(n%10==4 || n%10==7) count++;
    n /= 10;
  }
  if(count==4 || count==7) cout << "YES";
  else cout << "NO";
    
  return 0;
}