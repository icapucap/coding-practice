#include<bits/stdc++.h>
using namespace std;

int maxMin(int k, vector<int> arr) {
    vector<int> minmax;
    if(k==arr.size())return *max_element(arr.begin(),arr.end())-*min_element(arr.begin(),arr.end());
    int i=0,size=arr.size();
    sort(arr.begin(),arr.end());
    while((i+k)<=arr.size()){
        minmax.push_back(*max_element(arr.begin()+i,arr.begin()+(i+k))-*min_element(arr.begin()+i,arr.begin()+(i+k)));
        i++;
    }
    for(int l:minmax)cout<<l<<" ";
    return *min_element(minmax.begin(),minmax.end());
}