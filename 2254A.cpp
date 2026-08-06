//https://codeforces.com/contest/2254/problem/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int count=0;
        while(a!=b && b!=c && a!=c){
            count++;
            if(a>b && a>c && b<c && b<a){
                a--;
                b++;
            }
            else if(a>b && a>c && c<b && c<a){
                c++;
                a--;
            }
            else if(b>a && b>c && a<c && a<b){
                a++;
                b--;
            }
            else if(b>a && b>c && c<b && c<a){
                c++;
                b--;
            }
            else if(c>a && c>b && a<b && a<c){
                c--;
                a++;
            }
            else if(c>a && c>b && b<a && b<c){
                b++;
                c--;
            }
        }
        cout<<count<<endl;
    }
}
