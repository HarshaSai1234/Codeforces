//https://codeforces.com/problemset/problem/703/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int m=0;
    int c=0;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>b){
            m++;
        }
        else if(b>a){
            c++;
        }
    }
    if(m>c){
        cout<<"Mishka";
    }
    else if(c>m){
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
}
