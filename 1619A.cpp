#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        if(n%2!=0){
            cout<<"NO\n";
        }
        else{
            string s1=s.substr(0,(n/2));
            string s2=s.substr((n/2),(n/2));
            if(s1==s2){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
}
