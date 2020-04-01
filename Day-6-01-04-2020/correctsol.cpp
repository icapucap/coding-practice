#include<bits/stdc++.h>
using namespace std;

int main(){
    string sn,sbob;
    cin>>sn>>sbob;
    vector<string> v,nonzero;
    v.push_back(sn);
     if(sn.length()!=sbob.length()){
         cout<<"WRONG_ANSWER";
         exit(0);
     }
    if(sn.length()==1&&sbob.length()==1){
        if(sn==sbob)cout<<"OK";
        else cout<<"WRONG_ANSWER";
        exit(0);
    }
    sort(sn.begin(),sn.end());
    //cout<<sn;
    v.push_back(sn);
    while(next_permutation(sn.begin(),sn.end())){
        v.push_back(sn);
    }
    //cout<<v[0];
    sort(v.begin(),v.end());
    //cout<<v[0];
    for(int i=0;i<v.size();i++){
        if(v[i][0]!='0')nonzero.push_back(v[i]);
    }
    sort(nonzero.begin(),nonzero.end());
    //for(auto c:nonzero)cout<<c<<endl;
    //cout<<nonzero[0];
    if(sbob!=nonzero[0])cout<<"WRONG_ANSWER";
    else cout<<"OK";
    

    return 0;
}