class Solution {
public:
    TreeNode* helper(vector<int> v, int l, int r){
        if(l>r) return NULL;
        int mid = l + (r-l)/2;
        
        TreeNode *root = new TreeNode(v[mid]);
        root->left = helper(v,l,mid-1);
        root->right = helper(v, mid+1, r);
        return root;
        
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head = head->next;
        }
        
        return helper(v,0,v.size()-1);
    }
};
