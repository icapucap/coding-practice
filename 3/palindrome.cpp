#include<bits/stdc++.h>
using namespace std;
// wrong
int main(){
    int n,m;
    cin>>n>>m;
    vector<string>v(n),x(n);
    unordered_map<string,string> r;
    vector<string>::iterator itr;
    for(int i=0;i<n;i++){
        cin>>v[i];
        x[i]=v[i];
    }
    for(int i=0;i<v.size();i++){
        reverse(v[i].begin(),v[i].end());
        itr = find(v.begin(),v.end(),v[i]);
        if(itr!=v.end()){
            string tempo = *itr;
            reverse(v[i].begin(),v[i].end());
            r[v[i]]=tempo;
            //cout<<v.size()<<" ";
            v.erase(v.begin()+i);
            v.erase(itr);
            //cout<<v.size()<<" "<<endl;
            n-=2;
        }
        else
        {
            v.erase(v.begin()+i);
            n--;
        }
        
    }

    for(auto x:r){
        cout<<x.first<<" "<<x.second<<endl;
    }

    if(r.size()==1)
    {for(auto y:r){
    if(find(x.begin(),x.end(),y.second)==x.end())
        {
            cout<<0;exit(0);
        }
    }}
    //cout<<endl;

    v.erase(v.begin(),v.end());
    x.erase(x.begin(),x.end());
    for(auto y:r){
        v.push_back(y.first);
        x.push_back(y.second);
    }
    string s;
    //cout<<v[0]<<" "<<x[0]<<" "<<v[1]<<" "<<x[1]<<endl;
    reverse(x.begin(),x.end());
    //cout<<v[0]<<" "<<x[0]<<" "<<v[1]<<" "<<x[1]<<endl;
    vector<string> temp;
    for(auto y:v){
        temp.push_back(y);
        //cout<<y<<" ";
    }
    //cout<<endl;
    for(auto y:x){
        temp.push_back(y);
        //cout<<y<<" ";
    }
    unique(temp.begin(),temp.end());
    
    for(auto y:temp){
        s+=y;
    }
    //cout<<endl<<endl;
    //cout<<s.length()<<endl<<s;

    return 0;

}