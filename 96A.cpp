//https://codeforces.com/contest/96/problem/A


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    int n = s.length();
    int o=0,z=0;
    bool dan=false;
    for(int i=0;i<n;i++){
        if(s[i]=='1') o++;
        if(s[i]=='0')z++;
        if(s[i]=='1'&&s[i-1]=='0')o=1;
        if(s[i]=='0'&&s[i-1]=='1')z=1;
        if(o==7 || z==7){
            dan=true;
            break;
        }
    }
    if(dan){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}