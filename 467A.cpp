//https://codeforces.com/problemset/problem/467/A

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(abs(a-b)>=2){
            count++;
        }
    }
    cout<<count;
}