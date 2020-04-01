#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int h,n;
        cin>>h>>n;
        int c=0;
        if(h==2||h==1||h==0){
            cout<<c<<endl;
            continue;
        }
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v[temp-1]=1;
        } 
        int i=n-1;
        
        while(i>=2){
            if(v[i]==1)v[i]=0;
            else v[i]=1;
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