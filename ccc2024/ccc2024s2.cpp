//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main() {
    fastio
    
    int t, n;

    cin >> t >> n;

    vector<int> ans(t, 1000);
    string s;

    for (int i = 0; i < t; i++){
        vector<int> freq(26);
        cin >> s;
        for (int j = 0; j < n; j++){
            freq[int(s[j]) - 97]++;

            if (j>0){
                if (s[j] == s[j-1]){
                    ans[i] = 0;
                    break;
                }
            }

        }


        if (ans[i] != 0){
            //cout << "okay got here" << endl;
            int prev = 0;
            int curr = 0;

            if (freq[int(s[0])-97] == 1){
                //cout << "this mean B appears once!" << endl;
                prev = 0;
            }
            else{
                //cout << "this mean B appears more than once!" << endl;
                prev = 1;
            }

            for (int j = 1; j < n; j++){
                //cout << j << " this is current j" << endl;
                
                if (freq[int(s[j])-97] == 1){
                curr = 0;
                //cout << j << " this means appears once!" << endl;
                }
                else{
                    curr = 1;
                    //cout << j << " this means appears more than once!" << endl;
                }



            if (prev == curr){
                ans[i] = 0;
                break;
            }
            prev = curr;
        
            }

        }

        if (ans[i] != 0){
                ans[i] = 1;
            }


    }


    for (int i = 0; i < t; i++){
        if (ans[i] == 0){
            cout << "F" << endl;
        }
        else{
            cout << "T" << endl;
        }
    }
}

    
    