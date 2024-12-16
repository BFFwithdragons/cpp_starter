#include "../PPPheaders.h"

int main() {
  string a, b, c;
  string temp;
  cout << "enter some string" << endl;
  cout << "Input: "  << 0 << "," << 0 << "," << 0 << endl;

  cin >> a >> b >> c;

  

  cout << a << b << c << endl;
  if(a < b) {
    temp = a;
    a = b;
    b = temp;
  }
  if(a < c) {
    temp = a;
    a = c;
    c = temp;
  }
  if(b < c) {
    temp = b;
    b = c;
    c = temp;
  }
  cout << "OUTPUT: " << a << "," << b << "," << c << endl;
}
