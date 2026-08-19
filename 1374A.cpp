//https://codeforces.com/problemset/problem/1374/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long x,y,n;
        cin>>x>>y>>n;
        int ans = n - (n - y) % x;
        cout<<ans<<endl;
    }
    return 0;
}
