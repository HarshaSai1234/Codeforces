//https://codeforces.com/problemset/problem/1985/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        char t = a[0];
        a[0]=b[0];
        b[0]=t;
        cout<<a<<" "<<b<<endl;
    }
}
