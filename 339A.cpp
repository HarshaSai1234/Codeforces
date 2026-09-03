//https://codeforces.com/problemset/problem/339/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string nums;
    for (char c : s) if (c != '+') nums += c;
    
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size(); i++) {
        if (i) cout << "+";
        cout << nums[i];
    }
    cout << endl;
}