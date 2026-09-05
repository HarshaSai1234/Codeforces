//https://codeforces.com/contest/2259/problem/B



    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            vector<int> v(n);
            int o=0,e2=0,e4=0;
            for(int i=0;i<n;i++){
                cin>>v[i];
                if(v[i]%2==1) o++;
                else if(v[i]%4==0) e4++;
                else e2++;
            }
            cout<<max({o,e2,e4})<<endl;
        }
    }