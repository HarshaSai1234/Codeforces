//https://codeforces.com/contest/1921/problem/A


#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e,f,g,h,side;
        cin>>a>>b>>c>>d>>e>>f>>g>>h;
        if(a==c){
            side=abs(d-b);
        }
        else if(a==e){
            side=abs(f-b);
        }
        else if(a==g){
            side=abs(h-b);
        }
        cout<<side*side<<endl;
    }
}