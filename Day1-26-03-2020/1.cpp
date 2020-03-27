#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    int a[q],b[q],c[q];
    unordered_map<int,int> u;
    for(int i=0;i<q;i++){
        cin>>a[i];
        if(u[a[i]]==0)u[a[i]]=i+1;
        else u[a[i]]=min(u[a[i]],i+1);
        
    }
    for(int i=0;i<q;i++){
        cin>>b[i];
        if(u[b[i]]==0)u[b[i]]=i+1;
        else u[b[i]]=min(u[b[i]],i+1);
    }
    for(int i=0;i<q;i++){
        cin>>c[i];
        if(u[c[i]]==0)u[c[i]]=i+1;
        else u[c[i]]=min(u[c[i]],i+1);
    }
    int sum=0;
    vector<int> v;
    for(auto n:u){
        v.push_back(n.second);
    }
    sort(v.begin(),v.end());
    int i=0;
    while(i<3){
        sum+=v.back();
        v.pop_back();
        i++;
    }
    cout<<sum;

        return 0;
}