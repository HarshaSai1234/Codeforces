//https://codeforces.com/contest/510/problem/A


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,m;
    cin>>n>>m;
    bool first=true;
    for(int i=1;i<=n;i++){
        if (i % 2 == 1) {
            // Odd row
            for (int j = 1; j <= m; j++) {
                cout << "#";
            }
        }
        else if (i % 4 == 2) {
            // Even row: # at the right
            for (int j = 1; j <= m - 1; j++) {
                cout << ".";
            }
            cout << "#";
        }
        else {
            // Even row: # at the left
            cout << "#";
            for (int j = 1; j <= m - 1; j++) {
                cout << ".";
            }
        }
        cout<<endl;
    }
}