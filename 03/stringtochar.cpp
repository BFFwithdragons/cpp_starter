#include "../PPPheaders.h"
using namespace std;
// this file is just an example and is meant to be deleted

int main(){
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << endl;
        cout << (int)a[i] << endl;
    }
    return 0;
}
