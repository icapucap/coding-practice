#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,k=0;
    cin>>t;
    vector<long long int>res(t);
    while(k<t){
        int n;
        cin>>n;
        vector<int> cars(n);
        for(int i=0;i<n;i++)
        {
            cin>>cars[i];
        }
        sort(cars.rbegin(),cars.rend());
        long long int profit=0;
        for(int i=0;i<n;i++){
            if(cars[i]-i>0)profit+=cars[i]-i;
        }
        res[k]=profit;
        k++;
    }
    int size=res.size(),i=0;
    while(i<size){
        cout<<res[i]%1000000007<<endl;
        i++;
    }
    return 0;
}