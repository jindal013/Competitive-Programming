#include <iostream>
using namespace std;

int main () {
    
    string able;
    string need;

    cin >> able;
    cin >> need;

    int able_1 = able.size();
    int need_1 = need.size();

    if (able_1 >= need_1) {
        cout << "go" << endl;
    }
    else {
        cout << "no" << endl;
    }

}