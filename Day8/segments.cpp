#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int a,count=0,k=0,x,y;
    while(v.size()){
        int max=0;
        for(int i=0;i<v.size();i++){
            a=v[i];
            k=1;
            while(i+k<v.size()&&v[i+k]==a)
                k++;
            if(k>max){
                max=k;
                x=i;
                y=i+k;
            }
            i=i+k-1;
        }
        v.erase(v.begin()+x,v.begin()+y);
        count++;        
    }
    cout<<count;
    
    return 0;
}