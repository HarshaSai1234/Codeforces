//https://codeforces.com/contest/25/problem/A


#include <bits/stdc++.h>
using namespace std;
 
int main() {
        int n;
        cin>>n;
        int a[n];
        int ec=0,oc=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) ec++;
            else oc++;
        }
        if(ec==1){
            for(int i=0;i<n;i++){
                if(a[i]%2==0){ 
                    cout<<i+1;
                    break;
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]%2==1){ 
                    cout<<i+1; 
                    break;
                }
            }
        }
        return 0;
}