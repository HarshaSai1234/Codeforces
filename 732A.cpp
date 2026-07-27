//https://codeforces.com/problemset/problem/732/A


#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    int i = 1;
    while (true) {
        int lastDigit = (k * i) % 10;
        if (lastDigit == 0 || lastDigit == r) {
            cout << i << endl;
            break;
        }
        i++;
    }
}