//https://codeforces.com/contest/59/problem/A


#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	string s;
	cin>>s;
	int lcount=0;
	int len = s.length();
	for(int i=0;i<len;i++){
	    int a=s[i];
	    if(a>=97 && a<=122){
	        lcount++;
	    }
	}
	int ccount = len-lcount;
	if(ccount>lcount){
	    transform(s.begin(), s.end(),s.begin(), ::toupper);
	}
	else if(lcount>ccount){
	    transform(s.begin(),s.end(),s.begin(), ::tolower);
	}
	else{
	    transform(s.begin(),s.end(),s.begin(), ::tolower);
	}
	cout<<s;
}