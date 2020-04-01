#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v,negone;
    unordered_map<int,int> u;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    for(int i=0;i<n;i++){
        if(v[i]==-1)negone.push_back(i);
    }
    if(negone.size()==1){
        for(auto x:v){
            ++u[x];
        }
        cout<<u.size();
        exit(0);
    }
    for(int i=0;i<negone.size()-1;i++){
        for(int j=negone[i]+1;j<negone[i+1];j++){
            u[v[j]-negone[i]]+=1;
        }
    }
    cout<<u.size()+1;
    return 0;
}