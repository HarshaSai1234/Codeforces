//https://codeforces.com/problemset/problem/1926/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int af=0;
        for(int i=0;i<5;i++){
            if(s[i]=='A') af++;
        }
        int bf=5-af;
        if(af>bf){
            cout<<"A\n";
        }
        else{
            cout<<"B\n";
        }
    }
}
