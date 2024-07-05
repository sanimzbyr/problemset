#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
  string s;
  getline(cin, s);
  int upcount=0;
  int lowcount=0;
  for(char ch: s) {
    if(isupper(ch)) upcount++;
    else if(islower(ch)) lowcount++;
  }
  string result;
  if(lowcount >= upcount){
    for(char ch: s){
      result += tolower(static_cast<unsigned char>(ch));
    }
  }
  else {
    for(char ch: s){
      result += toupper(static_cast<unsigned char>(ch));
    }
  }
  cout << result;
  return 0;
}