//https://codeforces.com/problemset/problem/431/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            count+=a;
        }
        else if(s[i]=='2'){
            count+=b;
        }
        else if(s[i]=='3'){
            count+=c;
        }
        else{
            count+=d;
        }
    }
    cout<<count;
}
