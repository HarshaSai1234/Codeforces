//https://codeforces.com/problemset/problem/734/A

#include <iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    int aCount=0,Dcount=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            aCount++;
        }
        else{
            Dcount++;
        }
    }
    if(aCount==Dcount){
        cout<<"Friendship";
    }
    else if(aCount>Dcount){
        cout<<"Anton";
    }
    else{
        cout<<"Danik";
    }
}