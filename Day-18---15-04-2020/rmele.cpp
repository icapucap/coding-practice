#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=1;i<n-1;i++){
        if(v[i-1]<v[i]&&v[i]>v[i+1]){
            v.erase(v.begin()+i);
            break;
        }
    }
    int a=0,s=1;
    //vector<int> maxi;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]<v[i+1]){
            s+=1;
            a=max(s,a);
            //cout<<a<<" ";
        }
        else{
            s=1;
        }
    }
    cout<<a;
    return 0;
}