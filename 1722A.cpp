//https://codeforces.com/problemset/problem/1722/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string target = "Timur";

        sort(s.begin(), s.end());
        sort(target.begin(), target.end());

        if (n == 5 && s == target)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}