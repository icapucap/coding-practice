#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,k=0;
    cin>>t;
    vector<vector<string>> ans(t);
    while(t>k){
        vector<string> a(9);
        for(int i=0;i<9;i++){
            cin>>a[i];
            auto it = find(a[i].begin(),a[i].end(),'1');
            *it = '2';
        }
        ans[k] = a;
        k++;
    }
    k=0;
    cout<<endl;
    while(t>k){
        for(auto x:ans[k]){
            for(auto y:x)cout<<y;
            cout<<endl;
        }
        cout<<endl;
        k++;
    }

    return 0;
}