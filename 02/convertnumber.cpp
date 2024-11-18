// converts the spelling of a number into its numeric form

#include "../PPPheaders.h"

int main () {
  string numberstring;
  int number;
  cin >> numberstring;
  if(numberstring == "zero") {
    number = 0;
  } else if(numberstring == "one") {
    number = 1;
  } else if(numberstring == "two") {
    number = 2;
  } else if(numberstring == "three") {
    number = 3;
  } else if(numberstring == "four") {
    number = 4;
  } else if (numberstring == "five") {
    number = 5;
  } else if (numberstring == "six") {
    number = 6;
  } else if (numberstring == "seven") {
    number = 7;
  } else if (numberstring == "eight") {
    number = 8;
  } else if(numberstring == "nine") {
    number = 9;
  }
  cout << number << endl;
}
