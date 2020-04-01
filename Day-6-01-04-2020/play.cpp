#include<bits/stdc++.h>
using namespace std;

int main(){
    long int t;
    cin>>t;
    while(t--){
        long int h,n;
        cin>>h>>n;
        int c=0;
        if(h==2||h==1||h==0){
            cout<<c<<endl;
            continue;
        }
        vector<long int>v(h,0);
        for(int i=0;i<n;i++){
            long int temp;
            cin>>temp;
            v[temp-1]=1;
        } 
        long int i=h-1;
        
        while(i>=0){
             if(i==0||i==1)break;
             if(v[i-1]==1)v[i-1]=0;
             else v[i-1]=1;
             if(v[i-1]==0&&v[i-2]==0){
                 c++;
                 i-=2;
                 v[i]=1;
             }
             else if(v[i-1]==0&&v[i-2]==1)i-=2;
             else i-=1;
        }
        cout<<c<<endl;
    }
    return 0;

}