#include <bits/stdc++.h>

using namespace std;

long candies(int n, vector<int> arr) {
    long sum=0;
    if(arr.empty())return 0;
    vector<int>v(n,1);
    for(int i=1;i<n;i++){
        if(arr[i-1]<arr[i]){
            v[i]+=v[i-1];
        } 
    }
    for(int i = n-2 ; i >= 0 ; i--){ 
        if(arr[i] > arr[i+1] && v[i] <= v[i+1])
            v[i] = v[i+1] + 1;
        }
    for(int x:v){
        sum+=x;
    }
    return sum;
}