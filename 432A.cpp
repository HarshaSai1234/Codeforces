//codeforces.com/problemset/problem/432/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    int e=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]+k<=5) e++;
    }
    cout<<e/3;
}
