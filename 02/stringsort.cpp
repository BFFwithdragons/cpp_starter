#include "../PPPheaders.h"

int main() {
  string a, b, c;
  string temp;
  cout << "enter some string" << endl;
  cout << "Input: "  << 0 << "," << 0 << "," << 0 << endl;

  cin >> a >> b >> c;

  

  cout << a << b << c << endl;
  if(a[0] < b[0]) {
    temp = a;
    a = b;
    b = temp;
  }
  if(a[0] < c[0]) {
    temp = a;
    a = c;
    c = temp;
  }
  if(b[0] < c[0]) {
    temp = b;
    b = c;
    c = temp;
  }
  cout << "OUTPUT: " << a << "," << b << "," << c << endl;
}
