//https://codeforces.com/problemset/problem/1520/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool sus=false;
        for(int i=0;i<n;i++){
            char c=s[i];
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j] && s[j-1]!=s[j]){
                    
                 sus=true;
                 break;
                }
            }if(sus){
                break;
            }
        }
        if(sus){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}
