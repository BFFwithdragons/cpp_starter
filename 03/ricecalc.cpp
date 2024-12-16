#include "../PPPheaders.h"

int amount;
int squares;

int calcdoublesquare(int riceamount);
int main(){
    int input;
    cout << "1000 grains are at least " << calcdoublesquare(1000) << " squares." << endl;
    cout << "1,000,000 grains are at least " << calcdoublesquare(1000000) << " squares." << endl;
    cout << "1,000,000,000 grains are at least " << calcdoublesquare(1000000000) << " squares." << endl;
    cout << "Choose your own amount" << endl;
    cin >> input; 
    cout << input << endl;
    return 0;
}

int calcdoublesquare (int riceamount) {
    amount = 1;
    squares = 1;
    while(true) {
        amount *= 2;
        ++squares;
        if(riceamount <= amount) {
            return squares;
        }
    }
}
