#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n,t25=0,t50=0;
    cin>>n;
    int a[n];
    for(long int i=0;i<n;i++){
        cin>>a[i];
    }
    long int i=0;
    while(i<n){
        if(a[i]==25)t25++;
        if(a[i]==50){
            if(t25>0){
                t25-=1;
                t50++;
            }
            else {
                cout<<"NO";
                exit(0);
            }
        }
        if(a[i]==100){
            if(t25>=1&&t50>0)
                {
                    t25-=1;
                    t50-=1;
                }
            else if(t25>=3){
                t25-=3;
            }
            else{
                cout<<"NO";
                exit(0);
            }
        }
        i++;
    }
    cout<<"YES";
    return 0;
}