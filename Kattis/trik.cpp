#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main () {
    int ball = 1;
    string letter;
    cin >> letter;

    for (char c : letter){
        if (c == 'A'){
            if (ball == 1){
                ball = 2;
            }
            else if (ball == 2){
                ball = 1;
            }
        }
        else if (c == 'B'){
            if (ball == 2){
                ball = 3;
            }
            else if (ball == 3){
                ball = 2;
            }
        }
        else {
            if (ball == 1){
                ball = 3;
            }
            else if (ball == 3){
                ball = 1;
            }
        }
    }
    
    cout << ball << endl;

}