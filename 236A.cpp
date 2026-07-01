//https://codeforces.com/problemset/problem/236/A


#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int count=0;
    bool single=true;
    for(int i=0;i<s.length();i++){
        single=true;
        for(int j=0;j<i;j++){
            if(s[i]==s[j]) single=false;
        }
        if(single){
            count++;
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }

    return 0;
}