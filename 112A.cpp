//https://codeforces.com/problemset/problem/112/A

#include <iostream>
using namespace std;


int main(){
    string a;
    cin>>a;
    for(int i = 0; i < a.size(); i++) {
    a[i] = tolower(a[i]);
    }
    string b;
    cin>>b;
    for(int i = 0; i < b.size(); i++) {
        b[i] = tolower(b[i]);
    }
    int count=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>b[i]){
            count=1;
            break;
        }
        if(a[i]<b[i]){
            count=-1;
            break;
        }
    }
    if(count==0){
        cout<<0;
    }
    else if(count==-1){
        cout<<-1;
    }
    else{
        cout<<1;
    }
}