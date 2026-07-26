//https://codeforces.com/problemset/problem/750/A


#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int remaining = 240 - k;
    int sum = 0, count = 0;

    for (int i = 1; i <= n; i++) {
        sum += 5 * i;
        if (sum <= remaining)
            count++;
        else
            break;
    }

    cout << count;
    return 0;
}