//https://codeforces.com/contest/1834/problem/A


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int pos = 0, neg = 0;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            if (x == 1)
                pos++;
            else
                neg++;
        }
 
        int ans = 0;
 
        while (neg > pos || neg % 2 != 0) {
            neg--;
            pos++;
            ans++;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}