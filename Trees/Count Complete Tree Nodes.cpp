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
    int findLeftHeight(TreeNode* node){
        int hi = 0;
        while(node){
            hi++;
            node = node->left;
        }
        return hi;
    }
    int findRightHeight(TreeNode* node){
        int hi = 0;
        while(node){
            hi++;
            node = node->right;
        }
        return hi;
    }
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        
        int lh = findLeftHeight(root);
        int rh = findRightHeight(root);
        
        if(lh==rh) return (1<<lh) - 1;
        
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
