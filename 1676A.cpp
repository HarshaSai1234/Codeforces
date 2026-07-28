//https://codeforces.com/problemset/problem/1676/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int f=0;
        int b=0;
        for(int i=0;i<6;i++){
            if(i<3){
                f+=s[i]-'0';
            }
            if(i>=3){
                b+=s[i]-'0';
            }
        }
        if(f==b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO\n";
        }
        
    }
}