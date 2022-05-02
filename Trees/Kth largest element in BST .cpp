class Solution
{
    public:
    void inorder(Node *cur, vector<int> &ans){
        if(!cur)return;
        inorder(cur->left,ans);
        ans.push_back(cur->data);
        inorder(cur->right,ans);
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        vector<int>ans;
        inorder(root,ans);
        return ans[ans.size()-K];
    }
};
