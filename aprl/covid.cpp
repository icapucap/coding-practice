#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,k=0;
    cin>>t;
    vector<string>res(t,"YES");
    for(int k=0;k<t;k++){
        int n;
        cin>>n;
        vector<int> v(n,0);
        vector<int> a;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1){
                a.push_back(i);
            }
        }
        
        for(int i=0;i<a.size()-1;i++){
            if(a[i+1]-a[i]<6){
                res[k]="NO";
                break;
            }
            
        }
        //cout<<res[k]<<endl;
    }
     for(int i=0;i<t;i++){
         cout<<res[i]<<endl;
     }
    return 0;
}