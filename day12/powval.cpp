class Solution {
public:
    int c=0;
    int count(int x){
        if(x==1)return c;
        if(x%2==0){
            c++;
            count(x/2);
        }else
        {
            c++;
            count(3*x+1);
        }
        return c;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>> u;
        while(hi>=lo){
            c=0;
            int x = count(lo);
            u.push_back(make_pair(x,lo));
            lo++;
        }
        sort(u.begin(),u.end());
        return u[k-1].second;
    }
};