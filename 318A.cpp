//https://codeforces.com/contest/318/problem/A


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, k;
    cin >> n >> k;
 
    long long oddCount = (n + 1) / 2;
 
    if (k <= oddCount) {
        cout << 2 * k - 1;
    } else {
        cout << 2 * (k - oddCount);
    }
 
    return 0;
}