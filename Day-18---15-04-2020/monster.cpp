#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,k,c=0;
    cin>>n>>a>>b>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v[i]%=a+b;
        if(v[i]%(a+b)==0)v[i]=a+b;
        v[i] = (v[i]-1)/a;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(k-v[i]<0)break;
        c++;
        k-=v[i];
    }
    cout<<c;
    
    return 0;
}