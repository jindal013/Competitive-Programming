#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);
#define endl "\n"
using namespace std;

int main()
{
    fastio

    freopen("notlast.in", "r", stdin);
    freopen("notlast.out", "w", stdout);

    int n,
    milk;
    string c;
    cin >> n;
    map<string, int> cows{{"Bessie", 0}, {"Elsie", 0}, {"Daisy", 0}, {"Gertie", 0}, {"Annabelle", 0}, {"Maggie", 0}, {"Henrietta", 0}};
    map<int, string> new_cows;

    while (n--)
    {
        cin >> c >> milk;
        cows[c] += milk;
    }

    for (auto &it : cows)
    {
        new_cows[it.second] = it.first;
    }

    int min = new_cows.begin()->first;
    int min2 = -1;

    for (auto &it : new_cows)
    {
        if (it.first != min)
        {
            min2 = it.first;
            break;
        }
    }

    if (min2 == -1)
    {
        cout << "Tie" << endl;
        return 0;
    }

    int count = 0;

    for (auto &it : cows)
    {
        if (it.second == min2)
        {
            count++;
        }
    }

    if (count > 1)
    {
        cout << "Tie" << endl;
    }
    else
    {
        cout << new_cows[min2] << endl;
    }
}