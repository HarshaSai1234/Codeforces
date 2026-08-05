//https://codeforces.com/problemset/problem/1560/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int num=1;
        int count=0;
        while (true) {
            if (num % 3 != 0 && num % 10 != 3) {
                count++;
                if (count == k) {
                    cout << num << endl;
                    break;
                }
            }
            num++;
        }
    }
}
