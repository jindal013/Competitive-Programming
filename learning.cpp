#include <iostream>
//#include <Strin
#include <cstdio>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int main(){
    //freopen("template.in", "r", stdin);
    //freopen("template.out", "w", stdout);

    deque<int> d;
    d.push_front(1);
    d.push_back(2);

    for (auto it : d){
        cout << it << typeid(it).name() << endl;

    }



}