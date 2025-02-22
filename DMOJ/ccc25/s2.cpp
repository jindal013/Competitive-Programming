#include <bits/stdc++.h>
#include <string>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio
    long long c; 
    string s;

    cin >> s;
    cin >> c;

    long long len_string = s.length();
    long long sum_total = 0;
    vector<long long> sum_nums;
    vector<char> sum_chars;

    string _num = "";

    for (long long i = 0; i < len_string; i++) {
        if (isdigit(s[i])){
            _num += s[i];
            
            if ((i == (len_string - 1)) || (!isdigit(s[i+1]))){
                sum_total += stoll(_num);
                sum_nums.push_back(sum_total);
                sum_chars.push_back(s[i - _num.length()]);
                _num = "";
            }
        }
    }

    long long pos = (c % sum_total);

    for (long long i = 0; i < sum_nums.size(); i++) {
        if ((sum_nums[i] - 1) >= pos) {
            cout << sum_chars[i] << endl;
            break;
        }
    }

}
