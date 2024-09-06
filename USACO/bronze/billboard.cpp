#include <iostream>
#include <string.h>
#include <vector>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

void setIO(string s){
    freopen(((s) + ".in").c_str(), "r", stdin);
    freopen(((s) + ".out").c_str(), "w", stdout);
}

struct Rect{
    int x1, y1, x2, y2;
    int area(){
        return abs((y2 - y1) * (x2 - x1));
    }
};

int intersect(Rect a, Rect b){
    int x_overlap = max(0, min(a.x2, b.x2) - max(a.x1, b.x1));
    int y_overlap = max(0, min(a.y2, b.y2) - max(a.y1, b.y1));
    return x_overlap * y_overlap;
}

int main(){
    fastio
    setIO("billboard");

    Rect a, b, t;

    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;

    cout << a.area() + b.area() - intersect(a, t) - intersect(b, t) << endl;

    // vector<int> cords(12);
    
    // for (int &i : cords){
    //     cin >> i;
    // }

    // int area = (cords.at(3)-cords.at(1)) * (cords.at(2) - cords.at(0)) + (cords.at(7)-cords.at(5)) * (cords.at(6) - cords.at(4));

    // int intersection1_x = max(0, min(cords.at(2), cords.at(10)) - max(cords.at(8), cords.at(0)));
    // int intersection1_y = max(0, min(cords.at(3), cords.at(11)) - max(cords.at(9), cords.at(1)));
    // int intersection2_x = max(0, min(cords.at(6), cords.at(10)) - max(cords.at(8), cords.at(4)));
    // int intersection2_y = max(0, min(cords.at(7), cords.at(11)) - max(cords.at(9), cords.at(5)));
    // int total = intersection1_x*intersection1_y + intersection2_x*intersection2_y;

    // cout << area - total << endl;

}