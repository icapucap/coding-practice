class Solution {
public:
    //set<pair<int,int>> s;
    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            int m = grid[i].size();
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0)
                    ans = max(ans,dfs(grid,i,j,n,m,0));
            }
        }
        return ans;
    }
    
    int dfs(vector<vector<int>>& grid,int i,int j,int n,int m,int curr){
        if(i<0||j<0||i>=n||j>=m||grid[i][j]==0||grid[i][j]==-1)
            return curr;
        int temp = grid[i][j];
        curr+=temp;
        grid[i][j]=-1;
        
        int a = dfs(grid,i+1,j,n,m,curr);
        int b = dfs(grid,i-1,j,n,m,curr);
        int c = dfs(grid,i,j+1,n,m,curr);
        int d = dfs(grid,i,j-1,n,m,curr);
        
        int ans = max(a,max(b,max(c,d)));
        grid[i][j] = temp;
        //cout<<ans<<" ";
        return ans;
    }
};