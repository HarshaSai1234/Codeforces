//https://codeforces.com/problemset/problem/469/A


#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    int a[p];
    for(int i=0;i<p;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++){
        cin>>b[i];
    }
    set<int> s;
    for(int i=0;i<p;i++){
        s.insert(a[i]);
    }
    for(int i=0;i<q;i++){
        s.insert(b[i]);
    }
    if(s.size()==n){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
}