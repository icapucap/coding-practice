int pairs(int k, vector<int> arr) {
    int pairs=0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
            if(find(arr.begin()+i,arr.end(),arr[i]+k)!=arr.end()){
                pairs++;
                //arr.erase(find(arr.begin(),arr.end(),arr[i]+k));
            }
        }
    return pairs;

}