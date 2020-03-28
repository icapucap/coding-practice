#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        vector<int> next,prev,curr;int a,c=0;
        while(cin>>a){
            prev.push_back(a);
            curr.push_back(a);
        }
        while(1){
            c++;
                if((prev[n-1]==0&&prev[1]==1)||(prev[n-1]==1&&prev[1]==0)){
                    if(prev[0]==0)next[0]=1;
                    else if(prev[0]==1)next[0]=0;
                }
                for(int i=1;i<n-1;i++){
                    if((prev[i-1]==0&&prev[i+1]==1)||(prev[i-1]==1&&prev[i+1]==0)){
                        if(prev[i]==0)next[i]=1;
                        else if(prev[i]==1)next[i]=0;
                    }
                }
                if((prev[n-2]==0&&prev[0]==1)||(prev[n-2]==1&&prev[0]==0)){
                        if(prev[n-1]==0)next[n-1]=1;
                        else if(prev[n-1]==1)next[n-1]=0;
            }
                if(next==curr){
                    for(auto x:prev)cout<<x;
                    cout<<endl;
                    break;
                }
                if(c>prev.size()){
                    cout<<"no sol"<<endl;
                    break;
                }

            }

        
    }
    
    return 0;
}