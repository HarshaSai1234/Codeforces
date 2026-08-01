//https://codeforces.com/problemset/problem/1760/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int d = a+b+c-max({a,b,c})-min({a,b,c});
        cout<<d<<endl;
    }
}
