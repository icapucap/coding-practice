#include <bits/stdc++.h>
#include <functional>
#include <deque>
#include <vector>
using namespace std;


int luckBalance(int k, vector<vector<int>> c) {
deque<int> one;
int sum=0;
for(int i=0;i<c.size();i++){
    if(c[i][1]==1)
        one.push_back(c[i][0]);
    else 
        sum+=c[i][0];
}
sort(one.begin(),one.end());

while(k){
    sum+=one.back();
    one.pop_back();
    k-=1;
}
while(!one.empty()){
    sum-=one.back();
    one.pop_back();
}

return sum;
}

int main(){
    int a,b,n,k;
    cin>>n>>k;
    vector<vector<int>>c(n);
    
    for(int i=0;i<n;i++){
        cin>>a>>b;
        c[i].push_back(a);
        c[i].push_back(b);
    }
    int l = luckBalance(k,c);
    cout<<l;
    return 0;
}