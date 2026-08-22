//https://codeforces.com/problemset/problem/1742/B


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool order=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i]==a[j] && i!=j){
                    order=true;
                    break;
                }
            }
        }
        if(order){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}
