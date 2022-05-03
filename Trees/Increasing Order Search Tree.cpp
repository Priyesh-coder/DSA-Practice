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
    void inorder(TreeNode* root){
        if(!root) return;
        
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        TreeNode *ans=new TreeNode(v[0]), *temp=ans;
        
        for(int i=1; i<v.size(); i++){
            temp->right = new TreeNode(v[i]);
            temp = temp->right;
        }
        return ans;
    }
};
