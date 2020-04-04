#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp=0;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        temp+=a[i];
    }    
    if(temp%2!=0){
        cout<<"NO";
        exit(0);
    }
    temp/=2;
    sort(a.begin(),a.end());
    int c=temp-a[n-1];
    if(c==0){
        cout<<"YES";
        exit(0);
    }
    int start=0,end=n-1,mid;
    while(end>start){
        mid=(start+end)/2;
        if(a[mid]==c){
            cout<<"YES";
            exit(0);
        }
        else if(a[mid]>c)end = mid;
        else start = mid;
    }
    cout<<"NO";
    return 0;
}