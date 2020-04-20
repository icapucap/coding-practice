#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    vector<int> ans;
    cin>>t;
    while(t--){
        long long int n,x,s=0;
        cin>>n>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            s+=v[i];
        }
        if(s>=n*x){             //for some reason division doesn't work
            ans.push_back(n);
            continue;
        }
        else{
            sort(v.begin(),v.end());
            long long int k=0,c=0;
            for(int i=n-1;i>=0;i--){
                k+=v[i];
                c++;
                if(k<x*c)break;
            }
            ans.push_back(c-1);
        }
        
    }
    for(int k:ans)cout<<k<<endl;
    return 0;
}