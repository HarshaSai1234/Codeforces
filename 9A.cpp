//https://codeforces.com/problemset/problem/9/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;

    int m = max(y, w);
    int count = 6 - m + 1;

    if (count == 1)
        cout << "1/6";
    else if (count == 2)
        cout << "1/3";
    else if (count == 3)
        cout << "1/2";
    else if (count == 4)
        cout << "2/3";
    else if (count == 5)
        cout << "5/6";
    else
        cout << "1/1";

    return 0;
}