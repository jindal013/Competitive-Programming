#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
using namespace std;

vector<string> cows = {"Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"};

int main(){
    fastio
    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);

    int n;
    cin >> n;

    sort(cows.begin(), cows.end());
    map<string, int> cow_ind;
    for (int i = 0; i < 8; i++){
        cow_ind[cows[i]] = i;
    }

    vector<vector<int>> adj_list(8);
    
    for (int i = 0; i < n; ++i){
        string a, x, b;
        cin >> a >> x >> x >> x >> x >> b;
        adj_list[cow_ind[a]].push_back(cow_ind[b]);
        adj_list[cow_ind[b]].push_back(cow_ind[a]);
    }

    vector<int> chosen(8, 0);

    for (int i = 0; i < 8; i++){
        if (!chosen.at(i)){
            if (int(adj_list.at(i).size()) == 0){
                cout << cows.at(i) << endl;
                chosen.at(i) = 1;
                continue;
                // cow is chain of itself
            }
            else if (int(adj_list.at(i).size()) == 1){
                // cow is starting or ending
                cout << cows.at(i) << endl;
                chosen.at(i) = 1;
                int prev_cow = i;
                int next_cow = adj_list.at(i).at(0);
                //int prev_cow = next_cow;
                while (adj_list.at(next_cow).size() == 2){
                    int x = adj_list.at(next_cow).at(0);
                    int y = adj_list.at(next_cow).at(1);

                    // code here

                    cout << cows.at(next_cow) << endl;
                    chosen.at(next_cow) = 1;
                    
                    //prev_cow = next_cow;
                    int temp = next_cow;
                    next_cow = (x == prev_cow) ? y : x;
                    prev_cow = temp;
                    //prev_cow = (x == prev_cow) ? x : y;

                }
                cout << cows.at(next_cow) << endl;
                chosen.at(next_cow) = 1;

            }
        }        
    }

}