#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double r = 0;
    cin >> r;
    cout << fixed << showpoint;
    cout << setprecision(6);
    cout << (r*r*M_PI) << endl;
    cout << (r*r*2) << endl;
}