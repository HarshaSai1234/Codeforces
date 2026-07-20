//https://codeforces.com/problemset/problem/1335/A


#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1||n==2||n==0){
            cout<<0<<endl;
        }
        else{
            int mid = ceil(n/2.0);
            cout<<mid-1<<endl;
        }
    }
}