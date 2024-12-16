#include "../PPPheaders.h"
// this file is just an example and is meant to be deleted

int main(){
    int number1;
    int number2;
    int answer;
    string operatorvalue;
    cout << "What is the first number?" << endl;
    cin >> number1;
    cout << "What is the operator" << endl;
    cin >> operatorvalue;
    cout << "What is the second number?" << endl;
    cin >> number2;

    if(operatorvalue == "+") {
        answer = number1 + number2;
    } else if(operatorvalue == "-") {
        answer = number1 - number2;
    } else if(operatorvalue == "*") {
        answer = number1 * number2;
    } else if(operatorvalue == "/") {
        answer = number1 / number2;
    } else{
        cout << "invalid operator" << endl;
        return 0;
    }
    cout << "Your answer is " << answer << "." << endl;
    return 0;
}