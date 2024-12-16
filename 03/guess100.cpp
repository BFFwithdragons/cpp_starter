#include "../PPPheaders.h"

int main() {
    int guess = 50; // chosen number currently to guess
    string answer; //yes or no
    int averagehighest = 100; //highest possible number in range
    int averagelowest = 0;
    cout << "Choose a number 1-100" << endl;

    
    while(true) {
    cout << "Is it greater than " << guess << "? (y, n or c)" << endl; 
    cin >> answer;
    if(answer == "y") {
        if(guess > averagelowest) {
            averagelowest = guess;
        }
        guess = (averagehighest + guess) / 2;

    } else if(answer == "n"){
        if(guess < averagehighest) {
            averagehighest = guess; 
        }
        guess = (averagelowest + guess) / 2;

    } else {
        break;
    }
    }
    
    return 0;
}
