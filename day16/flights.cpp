class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
      unordered_map<int, vector<pair<int,int>>> graph;
        for(auto n:flights)graph[n[0]].push_back(make_pair(n[1],n[2]));
        vector<int> prices(n,-1);
        queue<pair<int,int>> q;
        q.push(make_pair(src,0));
        k++;
        while(!q.empty()){
            if(k==0)break;
            int l =q.size();
            for(int i=0;i<l;i++){
                auto curr = q.front();
                q.pop();
                for(auto e:graph[curr.first]){
                    int price = curr.second + e.second;
                    if(prices[e.first]==-1||price<prices[e.first]){
                        prices[e.first]=price;
                        q.push(make_pair(e.first,price));
                    }
                }
            }
            k--;
        }
        return prices[dst];
    }
};