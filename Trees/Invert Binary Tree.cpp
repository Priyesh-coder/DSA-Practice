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
    void swap(TreeNode* cur){
        if(!cur)return;
        
        swap(cur->left);
        swap(cur->right);
        
        TreeNode* temp;
        temp = cur->left;
        cur->left = cur->right;
        cur->right = temp;

    }
    TreeNode* invertTree(TreeNode* root) {
        swap(root);
        return root;
    }
};
