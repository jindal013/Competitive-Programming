#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t; //gettign number of test cases
    int n; //declaring variables (which will be reset, for each test case)
    int drawn;
    int answer = 0;
    //vector to refer to for every test case (will update this after every test iteration too)
    vector<int> date = {0, 0, 0, 1, 2, 2, 3, 5};
    for(int i = 0; i < t; i++){ //for each test case...
        cin >> n;
        //get number fo thingys pulled
        for(int j = 0; j < n; j++){ //for each number, check if it is needed
            cin >> drawn; //store number in a var
            auto it = find(date.begin(), date.end(), drawn);
            if(it != date.end()){// if num drawn is in list
                date.erase(it); //remove first instance of it from vec
               
            }
            answer++; //add one to the number of numbers required to complete the search
            if(date.empty()){// if date has been empited, no need to look at more drawn numbers, search is complete since minimum number of draws has been reached
                break; //break out of loop
            }
        }
        if(date.empty()){ 
           cout << answer;
        }
        else if ((answer == n) && !(date.empty())){
            cout << 0;
        }
        //reset variables for next test 
        date = {0, 0, 0, 1, 2, 2, 3, 5};
        answer = 0;
    }

}