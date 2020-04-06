#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c[n];
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    int a=c[0],b=c[n-1],asum=0,bsum=0,acnt=0,bcnt=0,i=0,j=0;
    while(i!=n-j){
        
        if(bsum>=asum){
            i++;
            asum+=c[i];
            acnt++;
        }else if(asum>bsum){
            j++;
            bsum+=c[n-1-j];
            bcnt++;
        }
    }
    cout<<acnt<<" "<<bcnt;

    return 0;
}