//https://codeforces.com/problemset/problem/116/A

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int pass=0;
    int max=0;
    while(t--){
        int a,b;
        cin>>a>>b;
        pass=pass-a;
        pass=pass+b;
        if(pass>=max){
            max=pass;
        }

    }
    cout<<max;
}