//https://codeforces.com/problemset/problem/228/A

#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> colours;
    for(int i=0;i<4;i++){
        int c;
        cin>>c;
        colours.insert(c);
    }
    cout<<4-colours.size();

}