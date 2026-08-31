//https://codeforces.com/problemset/problem/58/A
 
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    string target = "hello";
    int j = 0;
 
    for (char c : s) {
        if (j < target.size() && c == target[j]) {
            j++;
        }
    }
 
    if (j == target.size())
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}