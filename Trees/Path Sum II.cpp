/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root, vector<vector<int>> &ans, pair<vector<int>,int> curr,int targetSum){
        if(!root)return;
        curr.first.push_back(root->val);
        curr.second += root->val;
        
        if(!root->left && !root->right && curr.second==targetSum)
            ans.push_back(curr.first);
        
        solve(root->left,ans,curr,targetSum);
        solve(root->right,ans,curr,targetSum);

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        solve(root,ans,{{},0},targetSum);
        return ans;
    }
};
