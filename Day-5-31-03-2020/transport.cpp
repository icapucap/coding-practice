#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,index;
    cin>>n>>index;
    index-=1;
    if(index>n){
        cout<<"NO";
        exit(0);
    }
    else{
        vector<int> v(n-1);
        for(int i=0;i<n-1;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
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
    }
    return 0;
}