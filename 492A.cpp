//https://codeforces.com/problemset/problem/492/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    int t = 0;
    int level = 0;

    while(t <= n) {
        count++;
        level++;
        t += level * (level + 1) / 2;
    }

    cout << count - 1;
}