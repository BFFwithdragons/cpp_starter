#include "../PPPheaders.h"

int main() {
  int penny;
  int nickle;
  int dime;
  int quarter;
  int halfdollar;
  int fulldollar;

  cout << "How much pennies do you have?" << endl;
  cin >> penny;

  cout << "How much nickles do you have?" << endl;
  cin >> nickle;

  cout << "How much dimes do you have?" << endl;
  cin >> dime;

  cout << "How much quarters do you have?" << endl;
  cin >> quarter;

  cout << "How much half-dollars do you have?" << endl;
  cin >> halfdollar;

  cout << "How much one-dollar coins do you have?" << endl;

  cout << "In total:" << endl;
  cout << "You have " << penny << " pennies." << endl;
  cout << "You have " << nickle <<  " nickles." << endl;
  cout << "You have " << dime << " dimes." << endl;
  cout << "You have " << quarter << " quarters." << endl;
  cout << "You have " << halfdollar << " half-dollars." << endl;
  cout << "You have " << fulldollar << " one-dollar coins" << endl;

  int total = penny + nickle * 5 + dime * 10 + quarter * 25 + halfdollar * 50 + fulldollar * 100;
  cout << "The value of all your coins are " << total << " cents." << endl;

}
