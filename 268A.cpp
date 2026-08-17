//https://codeforces.com/problemset/problem/268/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[2 * n];

    for (int i = 0; i < 2 * n; i++) {
        cin >> a[i];
    }

    int count = 0;

    for (int i = 0; i < 2 * n; i += 2) {
        for (int j = 1; j < 2 * n; j += 2) {
            if (a[i] == a[j]) {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}