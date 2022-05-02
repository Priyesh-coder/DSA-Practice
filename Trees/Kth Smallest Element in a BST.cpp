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
  void find(Node* root, vector<int>& ans){
      if(!root) return;
      
      find(root->left, ans);
      ans.push_back(root->data);
      find(root->right, ans);
  }
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        vector<int>ans;
        find(root,ans);
        if(K>ans.size()) return -1;
        else return ans[K-1];
    }
};
