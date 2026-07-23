//https://codeforces.com/problemset/problem/1703/A


#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        string str = s;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        if(str == "yes"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}