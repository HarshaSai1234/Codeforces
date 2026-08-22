//https://codeforces.com/problemset/problem/1873/B


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
        int m=a[0];
        int c=0;
        for(int i=1;i<n;i++){
            if(m>=a[i]){
                m=a[i];
                c=i;
            }
        }
        a[c]+=1;
        long long sum=1;
        for(int i=0;i<n;i++){
            sum*=a[i];
        }
        cout<<sum<<endl;
    }
}
