#include<bits/stdc++.h>
using namespace std;

int main(){
    int lvls,temp,p,q;
    cin>>lvls;
    vector<int> x,y;
    set<int> s;
    cin>>p;
    while(p--){
        cin>>temp;
        s.insert(temp);
    }
    cin>>q;
    while(q--){
        cin>>temp;
        s.insert(temp);
    }
    // while(cin>>temp){
    //     cin>>temp;
    //     x.push_back(temp);
    // }
    // while(cin>>temp){
    //     cin>>temp;
    //     y.push_back(temp);
    // }
    // x.erase(x.begin());
    // y.erase(y.begin());
    // for(int a:x)s.insert(a);
    // for(int a:y)s.insert(a);
    if(s.size()==lvls)cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";

    return 0;
}