/*
#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
*/
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define ar array
#define ll long long
typedef pair<int, int> pii;
typedef vector<int> vi;
    
struct Point {
    double x;
    double y;

    Point(double theX, double theY) {
        x = theX;
        y = theY;
    }
    
    Point mirror() {
        return Point(x, -y);
    }

    Point translate(double xt, double yt) const {
        return Point(x+xt,y+yt);
    }
};

int main () {

    Point p(2, 4);

    cout << p.x << " " << p.y << endl;

    Point mp = p.translate(2, 2);

    cout << p.x << " " << p.y << endl;
    cout << mp.x << " " << mp.y << endl;

}


/*
int main() {
    long double r = 0;
    long double c = 0;

    cin >> r >> c;

    cout << (((r-c)*(r-c)/(r*r))*100) << endl;
    return 0;
}
*/