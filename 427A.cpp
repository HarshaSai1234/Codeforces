//https://codeforces.com/problemset/problem/427/A


#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int sum=0;
    int count=0;
    while(t--){
        int a;
        cin>>a;
        sum+=a;
        if(sum<0){
            count++;
            sum=0;
        }
    }
    cout<<count;
}