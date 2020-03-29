#include<bits/stdc++.h>
using namespace std;

long long fact(int n){
    if(n==0||n==1)return 1;
    else return n*fact(n-1);
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    if(k>fact(n))return;
    int pos=0;
    n--;
    while(n>0&&k>0){
        if(k%fact(n)==0)
            pos=k/fact(n)-1;
        else
            pos=k/fact(n);
        cout<<v[pos];
        v.erase(v.begin()+pos);
        k-=pos*fact(n);
        n--;
    }
    cout<<v[0];
    return 0;
}