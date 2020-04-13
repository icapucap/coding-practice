class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> s=strs;
        vector<vector<string>> ans;
        unordered_map<string,vector<int>> u;
        for(int i=0;i<s.size();i++){
            sort(s[i].begin(),s[i].end());
        }
        //for(auto x:s)cout<<x<<" ";
        for(int i=0;i<s.size();i++){
            u[s[i]].push_back(i);
        }
        for(auto n:u){
            vector<string> temp;
            for(int a:n.second){
                temp.push_back(strs[a]);
            }
            ans.push_back(temp);
        }
        
        return ans;
    }
};