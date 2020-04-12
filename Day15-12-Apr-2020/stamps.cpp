#include<bits/stdc++.h>
using namespace std;

set<long long int> visited;
unordered_map<long long int,vector<long long int>>adj;
unordered_map<long long int,int> c;

void dfs(long long int x){
    visited.insert(x);
    cout<<x<<" ";
    for(auto it=adj[x].begin();it!=adj[x].end();it++){
        if(visited.find(*it)==visited.end())
            dfs(*it);
    }
}

int main(){
    long long int n,i=0;
    cin>>n;
    
    while(n>i){
        long long int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        c[a]++;
        c[b]++;
        i++;
    }
    for(auto x:c)
        if(x.second==1)
            {
                dfs(x.second);
                break;
            }
    
    return 0;
}

