#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl "\n"
using namespace std;

int main(){
    fastio

    freopen ("mowing.in", "r", stdin);
    freopen ("mowing.out", "w", stdout);

    int n, ans = 1002, steps, t = 0;
    char dir;
    cin >> n;
    vector<vector<int>> grid(2001, vector<int>(2001, -1));

    int startx = 1000;
    int starty = 1000;

    grid[starty][startx] = 0;
    t++;

    while (n--){
        cin >> dir >> steps;

        if (dir == 'N'){
            for (int i = 0; i < steps; i++){
                starty--;

                if (grid[starty][startx] == -1){
                    grid[starty][startx] = t;
                }
                else{
                    ans = min(ans, (t - grid[starty][startx]));
                    grid[starty][startx] = t;
                }

                t++;
            }
        }
        else if (dir == 'S'){
            for (int i = 0; i < steps; i++){
                starty++;

                if (grid[starty][startx] == -1){
                    grid[starty][startx] = t;
                }
                else{
                    ans = min(ans, (t - grid[starty][startx]));
                    grid[starty][startx] = t;
                }

                t++;
            }
        }
        else if (dir == 'W'){
            for (int i = 0; i < steps; i++){
                startx--;

                if (grid[starty][startx] == -1){
                    grid[starty][startx] = t;
                }
                else{
                    ans = min(ans, (t - grid[starty][startx]));
                    grid[starty][startx] = t;
                }

                t++;
            }
        }
        else{
            for (int i = 0; i < steps; i++){
                startx++;

                if (grid[starty][startx] == -1){
                    grid[starty][startx] = t;
                }
                else{
                    ans = min(ans, (t - grid[starty][startx]));
                    grid[starty][startx] = t;
                }

                t++;
            }
        }

    }

    cout << (ans == 1002 ? -1 : ans);
}