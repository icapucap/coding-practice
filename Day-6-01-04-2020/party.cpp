#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int temp;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> lvl;
    for(int i=0;i<n;i++){
        int h=0,ctr=v[i];
        while(ctr!=-1){
            ctr = v[ctr-1];
            h++;
        }
        lvl.push_back(h);
    }
    sort(lvl.begin(),lvl.end());
    int count = unique(lvl.begin(),lvl.end())-lvl.begin();
    cout<<count;

    return 0;
}