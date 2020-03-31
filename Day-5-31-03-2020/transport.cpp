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

    vector<int> v(n-1);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int turn=0;
    vector<int> nxt;
    while(n>turn){
        turn+=v[turn];
        nxt.push_back(turn);
    }
    if(n==turn)nxt.push_back(turn);
    if(find(nxt.begin(),nxt.end(),index)!=nxt.end())cout<<"YES";
    else cout<<"NO";
    
    return 0;
}