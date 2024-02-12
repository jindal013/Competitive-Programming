#include <iostream>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main() {
    fastio
    int num1[200010] = {};
    int num2[200010] = {};
    int num = 0;
    int answer = 0;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> num1[i];
    }

    for (int i = 0; i < num; i++) {
        cin >> num2[i];
    }

    for (int i = 0; i < num; i++) {
        if (num1[i] == 1) {
            answer+= 3;
        }
        if (num2[i] == 1) {
            answer+= 3;
        }

        if ((i%2)==0){
            if ((num1[i] == 1) && (num2[i] == 1)) {
            answer -= 2;
        }
    }
    }

    for (int i =1; i<num; i++){
        if (num1[i] == 1 && num1[i-1] == 1) {
            answer -= 2;
        }
        if (num2[i] == 1 && num2[i-1] == 1) {
            answer -= 2;
        }
        }

    cout << answer << endl;


}
