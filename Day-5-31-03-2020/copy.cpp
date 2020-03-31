#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<long> ans;
    while(t--){
        long n;
        cin>>n;
        vector<long> v(n);
        vector<long>::iterator itr;
        for(long i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        itr = unique(v.begin(),v.end());
        //for(int x:v)cout<<x<<" "<<endl;
        ans.push_back(itr-v.begin());
    }
    for(int a:ans)cout<<a<<endl;
    return 0;
}