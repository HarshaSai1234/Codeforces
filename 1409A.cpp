//https://codeforces.com/problemset/problem/1409/A


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long diff = abs(a - b);
        cout << (diff + 9) / 10 << "\n";
    }

    return 0;
}