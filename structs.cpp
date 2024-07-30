#include <bits/stdc++.h>
using namespace std;

struct{
    bool operator()(int x, int y){
        cout << x << " THEN Y " << y;
        return x < y;
    }
} something;

int main(){
    vector<int> vec{6, 3, 129, 23, -1};

    sort(vec.begin(), vec.end(), something);


}