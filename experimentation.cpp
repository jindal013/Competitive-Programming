#include <bits/stdc++.h>
using namespace std;

namespace Chinmay{
    int a = 4;
}

class Something{
    public:
        int clas_first, clas_second;
        
        Something(int a = 100, int b = 200){
            this->clas_first = a;
            this->clas_second = b;        
        }

        void print(){
            cout << clas_first << " " << clas_second;
        }
};

int main(){
    vector<int> v{12, 3, 4, 1223, 43};

    sort(v.begin(), v.end(), [](int a, int b){ 
        return a > b;
    });

    for (int &i : v){
        cout << i << " ";
    }
    cout << endl;
    cout << v.capacity() << endl;
    v.insert(v.end()-1, 3, 2);
    cout << v.capacity() << endl;

    cout << endl;
    Something hello(123, 1233);
    hello.print();
    cout << endl;
    Something a;
    a.print();
    cout << endl;

    int b = Chinmay::a;
    cout << b << endl;
    
}

/*
#include <iostream>
#include <vector>
#include <chrono>

void withReserve() {
    std::vector<int> vec;
    vec.reserve(100000000);
    for (int i = 0; i < 100000000; ++i) {
        vec.push_back(i);
    }
}

void withoutReserve() {
    std::vector<int> vec;
    for (int i = 0; i < 100000000; ++i) {
        vec.push_back(i);
    }
}

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    withReserve();
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - start;
    std::cout << "Time with reserve: " << diff.count() << " s\n";

    start = std::chrono::high_resolution_clock::now();
    withoutReserve();
    end = std::chrono::high_resolution_clock::now();
    diff = end - start;
    std::cout << "Time without reserve: " << diff.count() << " s\n";

    return 0;
}*/