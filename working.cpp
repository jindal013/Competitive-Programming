#include <iostream>
using namespace std;

class Example {
private:
    int value1;
    int value2;

public:
    Example setValue1(int v){
        this->value1 = v;
        return *this;
    }

    Example setValue2(int v){
        this->value2 = v;
        return *this;
    }

    void printValues() const{
        cout << "Value 1: " << value1 << ", Value2: " << value2 << endl;
    }

};

int main(){
    Example obj;
    obj.setValue1(10).setValue2(20).printValues();
    // obj.setValue1(10);
    // obj.setValue2(20);
    // obj.printValues();
    return 0;
}