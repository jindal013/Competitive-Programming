#include <iostream>
using namespace std;

int main(){
    int g1, g2, g3, g4, e1, e2, e3, e4;
    double final1, final2 = 0;
    cin >> g1 >> g2 >> g3 >> g4;
    cin >> e1 >> e2 >> e3 >> e4;

    final1 = (g1+g2)/(2.0) + (g4+g3)/(2.0);
    final2 = (e1+e2)/(2.0) + (e3+e4)/(2.0);

    if (final1 > final2){
        cout << "Gunnar" << endl;
    }
    else if (final2 > final1){
        cout << "Emma" << endl;
    }
    else{
        cout << "Tie" << endl;
    }


}