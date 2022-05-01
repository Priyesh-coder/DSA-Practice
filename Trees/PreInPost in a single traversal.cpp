// PreInPost in a single traversal

class Solution {
public:
    vector<int>preInPostTraversal(TreeNode* root){
        stack<pair<TreeNode* , int>> st;
        st.push(root,1);
        vector<int>pre,in,post;
        if(root == NULL) return;
        
        while(!st.empty()){
            auto it = st.top();
            it.pop();
            
            // this is part of pre..
            if(it.second==1){
                pre.push_back(it.first->val);
                it.second++;
                st.push(it);
                
                if(it.first->left != NULL){
                    st.push({it.first->left, 1})
                }
            }
            
            // this is a part of in...
            else if(it.second==2){
                in.push_back(it.first->val);
                it.second++;
                st.push(it);
                
                if(it.first->right != NULL){
                    st.push({it.first->right, 1})
                }
            }
            else{
                post.push_back(it.first->val);
            }
        }
    }
    
};