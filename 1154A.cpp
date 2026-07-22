//https://codeforces.com/problemset/problem/1154/A


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x[4];

    for (int i = 0; i < 4; i++)
        cin >> x[i];

    sort(x, x + 4);

    int sum = x[3];

    cout << sum - x[2] << " "
         << sum - x[1] << " "
         << sum - x[0];

    return 0;
}