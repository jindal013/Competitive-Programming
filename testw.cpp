#include <bits/stdc++.h>
using namespace std;

void check(vector<double> v){
    for (int i = 1; i <= int(v.size()); i++){
        double sum = 0;
        for (int j = 0; j < i; j++){
            sum += v.at(j);
        }
        if (abs(sum - (i*i)*(v.at(i-1))) < 1e-6){
            cout << "OK: testcase " << i << ". Value of sum: " << sum << ". Value of (k^2)a_k: " << (i*i)*(v.at(i-1)) << endl;
        }
        else{
            cout << "WRONG: testcase " << i << endl;
        }
    }
}


int main(){
    vector<double> nums(10);

    for (int i = 1; i <= 10; i++){
        nums.at(i-1) = 1.0/double((i*(i+1)));
    }

    check(nums);

}