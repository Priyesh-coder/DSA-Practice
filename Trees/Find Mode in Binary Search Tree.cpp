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
    void inorder(TreeNode* root, vector<int>& ans){
        if(!root) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);

    }
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        unordered_map<int,int>mp;
        vector<int>res;
        int maxi = INT_MIN;
        for(auto it:ans)
            mp[it]++;
        
        for(auto it=mp.begin(); it!=mp.end();it++){
            if(it->second>maxi)
                maxi = it->second;
        }
         
        for(auto it=mp.begin(); it!=mp.end();it++){
            if(it->second==maxi)
                res.push_back(it->first);
        }
        return res;
    }
};
