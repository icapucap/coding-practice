/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)return ans;
        deque<TreeNode*> dq;
        int k=0;
        dq.push_front(root);
        while(!dq.empty()){
            int n = dq.size();
            vector<int>temp;
            while(n--){
                if(k%2==0){
                    TreeNode* curr = dq.front();
                    if(curr!=NULL){
                        temp.push_back(curr->val);
                        dq.push_back(curr->left);
                        dq.push_back(curr->right);
                    }
                    dq.pop_front();
                }
                else{
                    TreeNode* curr = dq.back();
                    if(curr!=NULL){
                        temp.push_back(curr->val);
                        dq.push_front(curr->right);
                        dq.push_front(curr->left);
                    }
                    dq.pop_back();
                }
                
            }
            if(temp.size()!=0)ans.push_back(temp);
            k++;
        }
        return ans;
        
    }
};