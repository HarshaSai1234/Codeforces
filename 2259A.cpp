//https://codeforces.com/contest/2259/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<n;i+=k){
            bool yes=true;
            for(int j=i;j<i+k;j++){
                if(s[j]=='0'){
                    yes=false;
                }
            }
            if(yes){
                count++;
            }
        }
        cout<<count<<endl;
    }
}