#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i=0;
    cin>>t;
    vector<int> res;
    while(t>i){
        int x,k;
        cin>>x>>k;
        long long int l=pow(2,k);
        if(l<=x&&x%l==0)res.push_back(1);
        else res.push_back(0);
        i++;
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }
    return 0;
}