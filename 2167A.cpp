//https://codeforces.com/problemset/problem/2167/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b && a==c && a==d){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
