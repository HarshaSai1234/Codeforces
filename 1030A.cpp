//https://codeforces.com/problemset/problem/1030/A

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    bool hard = false;
    while(t--){
        int a;
        cin>>a;
        if(a==1){
            hard=true;
        }
    }
    if(hard){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
}