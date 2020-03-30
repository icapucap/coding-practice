int maxProfit(vector<int>& prices) {
        vector<int> v;
        if(prices.empty())return 0;
        v=prices;
        int profit=0;
        sort(v.begin(),v.end());
        if(prices==v){
            profit=prices[prices.size()-1]-prices[0];
            return profit;
        }
        reverse(v.begin(),v.end());
        if(prices==v)return 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                profit+=prices[i]-prices[i-1];
            }
        }
           return profit;
    }