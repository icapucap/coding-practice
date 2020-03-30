//timeout error

long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> v(n,0);
    long l = queries.size(),j=0;
    while(l--){
        for(int i=queries[j][0]-1;i<=queries[j][1]-1;i++){
            v[i]+=queries[j][2];
        }
        j++;
    }
    return *max_element(v.begin(),v.end());

}