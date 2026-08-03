//https://codeforces.com/problemset/problem/758/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    int max=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=max){
            max=a[i];
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        count+=max-a[i];
    }
    cout<<count;
    
}
