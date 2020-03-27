#include <bits/stdc++.h> 
using namespace std;
 
int main(){
    int q;
    cin>>q;
    deque<string> v;
    while(q--){
        string str,a="";
        unordered_map<char,int> u;
        cin>>str;
        for(auto c:str){
            u[c]+=1;
        }
        for(auto n:u){
            if(n.second%2!=0||n.second==1)
                a+=n.first;
        }
        if(a.empty())a+=" ";
        v.push_back(a);   
    }
    cout<<endl<<endl;
    //cout<<v.size();
    for(int i=0;i<v.size();i++)
        {
            cout<<v.front()<<endl;
            v.pop_front();
        }
    return 0;
}