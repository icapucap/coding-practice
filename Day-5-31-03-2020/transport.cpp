#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,index;
    cin>>n>>index;
    
    if(index>n){
        cout<<"NO";
        exit(0);
    }
    index-=1;

    vector<int> v(n,0);
    for(int i=0;i<v.size()-1;i++){
        cin>>v[i];
    }
    int turn=0;
    vector<int> nxt;
    while(n-1>turn){
        turn+=v[turn];
        nxt.push_back(turn);
    }
    if(n==turn)nxt.push_back(turn);
    if(find(nxt.begin(),nxt.end(),index)!=nxt.end())cout<<"YES";
    else cout<<"NO";
    
    return 0;
}