//https://codeforces.com/problemset/problem/1881/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int ans = 0;

        while (x.length() < s.length()) {
            x += x;
            ans++;
        }

        if (x.find(s) != string::npos) {
            cout << ans << "\n";
        }
        else {
            x += x;
            ans++;

            if (x.find(s) != string::npos)
                cout << ans << "\n";
            else
                cout << -1 << "\n";
        }
    }

    return 0;
}