#include <bits/stdc++.h>
using namespace std;
//#define endl "\n"
// #define int long long

int main()
{
    //ios_base::sync_with_stdio(false); // solved the problem of unintentional space in output
    //cin.tie(nullptr);

    map<long long, long long> m;

    long long q, i, k, v;
    cin >> q;
    // int ans = 0;

    while (q--) // UPDATE: this is wrong! ignore -> reason it was happening was due to q-- here! it didn't satisfy the statement, but it made q = -1 after
    {
        // cout << "GETTING I AND K: " << endl;
        //q--;
        cin >> i >> k;
        if (i == 1LL)
        {
            if (m.count(k) > 0)
            {
                cout << m[k] << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else if (i == 0LL)
        {
            cin >> v;
            m[k] = v;
        }
        // ans++;
    }

    // cout << "ans: " << ans;
}