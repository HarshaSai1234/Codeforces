//https://codeforces.com/problemset/problem/1512/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int majority;

        if (a[0] == a[1])
            majority = a[0];
        else if (a[0] == a[2])
            majority = a[0];
        else
            majority = a[1];

        for (int i = 0; i < n; i++) {
            if (a[i] != majority) {
                cout << i + 1 << "\n";
                break;
            }
        }
    }
}