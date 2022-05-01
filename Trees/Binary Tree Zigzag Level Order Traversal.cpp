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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return {};
        
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> res;
        bool flag = true;
        
        while(!q.empty()){
            int size = q.size();
            vector<int>vec;
            
            while(size--){
                TreeNode* temp = q.front();
                q.pop();
                
                if(temp->left != NULL) q.push(temp->left);
                if(temp->right != NULL) q.push(temp->right);
                
                vec.push_back(temp->val);
            }
            if(flag){
                res.push_back(vec);
            }else{
                reverse(vec.begin(),vec.end());
                res.push_back(vec);
            }
            flag = !flag;
        }
        return res;
    }
};
