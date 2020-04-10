#include<bits/stdc++.h>
using namespace std;
int main(){
    // while(1){
    //     int temp;
    //     cin>>temp;
    //     if(temp==42)exit(0);
    //     cout<<temp<<endl;
    // }
    int t;
    cin>>t;
    vector<long long int>s;
    while(t--){
        long long int k,a=0;
        cin>>k;
        while(k){
            a+=k%10;
            a*=10;
            k/=10;
        }
        s.push_back(a);
    }
    for(auto a:s)cout<<a<<endl;
    return 0;
}