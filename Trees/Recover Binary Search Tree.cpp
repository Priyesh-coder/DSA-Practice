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
    vector<int>v;
    int i;
    void inorder(TreeNode* root){
        if(!root)return;
        
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    void rearr_inorder(TreeNode* root){
        if(!root)return;
        
        rearr_inorder(root->left);
        root->val = v[i++];
        rearr_inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        sort(v.begin(), v.end());
        rearr_inorder(root);
    }
};
