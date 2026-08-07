//https://codeforces.com/problemset/problem/1858/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (c % 2)
            a++;

        if (a > b)
            cout << "First\n";
        else
            cout << "Second\n";
    }
}
