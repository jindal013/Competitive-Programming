#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double r = 0;
    double c = 0;
    cin >> r >> c;
    //cout << fixed << showpoint;
    cout << setprecision(15);
    cout << (((r-c)*(r-c)/(r*r))*100) << endl;
    return 0;

}