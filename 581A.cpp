//https://codeforces.com/problemset/problem/581/A


#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int rem=0;
    if(a<b){
        cout<<a<<" ";
        rem=b-a;
    }
    else{
        cout<<b<<" ";
        rem=a-b;
    }
    cout<<rem/2;
}