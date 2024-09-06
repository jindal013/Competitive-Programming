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

struct Rect{
    int x1, y1, x2, y2;
    int area(){
        return ((x2-x1)*(y2-y1));
    }
};

int main(){
    fastio
    setIO("billboard");

    Rect lawn, feed;
    cin >> lawn.x1 >> lawn.y1 >> lawn.x2 >> lawn.y2 >> feed.x1 >> feed.y1 >> feed.x2 >> feed.y2;

    int x_overlap = max(0, min(feed.x2, lawn.x2) - max(feed.x1, lawn.x1));
    int y_overlap = max(0, min(feed.y2, lawn.y2) - max(feed.y1, lawn.y1));

    if (x_overlap == lawn.x2 - lawn.x1){
        if (feed.y1 > lawn.y1 && feed.y2 < lawn.y2){
            cout << lawn.area() << endl;
        }
        else{
            cout << lawn.area() - x_overlap*y_overlap << endl;
        }
    }
    else if (y_overlap == lawn.y2 - lawn.y1){
        if (feed.x1 > lawn.x1 && feed.x2 < lawn.x2){
            cout << lawn.area() << endl;
        }
        else{
            cout << lawn.area() - x_overlap*y_overlap << endl;
        }
    }
    else {
        cout << lawn.area() << endl;
    }

}