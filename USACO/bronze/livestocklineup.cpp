#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

vector<string> cows{"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
vector<vector<int>> adj(8, vector<int>(8, 0));
map<string, int> mp{{"Bessie", 0}, {"Buttercup", 1}, {"Belinda", 2}, {"Beatrice", 3}, {"Bella", 4}, {"Blue", 5}, {"Betsy", 6}, {"Sue", 7}};

bool check(){
    vector<vector<int>> adj2(8, vector<int>(8, 0));
    adj2[mp[cows.at(0)]][mp[cows.at(1)]] = 1;

    for (int i = 1; i < 7; i++){
        adj2[mp[cows.at(i)]][mp[cows.at(i-1)]] = 1;
        adj2[mp[cows.at(i)]][mp[cows.at(i+1)]] = 1;
    }

    adj2[mp[cows.at(7)]][mp[cows.at(6)]] = 1;

    for (int j = 0; j < 8; j++){
        for (int k = 0; k < 8; k++){
            if (adj[j][k] == 1){
                if (adj2[j][k] != 1){
                    return false;
                }
            }
        }
    }
    
    return true;
}

int main(){
    fastio 

    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);

    int n; // constraints, from 1 to 7
    string a, b, x1, x2, x3, x4;
    sort(cows.begin(), cows.end());

    cin >> n;

    while (n--){
        cin >> a >> x1 >> x2 >> x3 >> x4 >> b;
        adj[mp[a]][mp[b]] = 1;
        adj[mp[b]][mp[a]] = 1;
    }

    do{
        bool valid = check();
        if (valid){
            for (string &s:cows){
                cout << s << endl;
            }
            break;
        }
    } while (next_permutation(cows.begin(), cows.end()));

}