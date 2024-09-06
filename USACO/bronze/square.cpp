#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <math.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

void setIO(string s){
    freopen(((s) + ".in").c_str(), "r", stdin);
    freopen(((s) + ".out").c_str(), "w", stdout);
}

int main(){
    fastio
    setIO("square");

    array<int, 4> rect1{};
    array<int, 4> rect2{};

    for (int &i : rect1){
        cin >> i;
    }
    for (int &i : rect2){
        cin >> i;
    }

    int bottom_x = max(rect1.at(2), rect2.at(2));
    int bottom_y = min(rect1.at(1), rect2.at(1));
    int top_x = min(rect1.at(0), rect2.at(0));
    int top_y = max(rect1.at(3), rect2.at(3));

    int area = max(abs(top_x-bottom_x), abs(top_y-bottom_y));

    cout << area*area << endl;


}