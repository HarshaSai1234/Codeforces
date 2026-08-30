//https://codeforces.com/problemset/problem/69/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int xs=0,ys=0,zs=0;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        xs+=x;
        ys+=y;
        zs+=z;
    }
    if(xs==0&&ys==0&&zs==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
