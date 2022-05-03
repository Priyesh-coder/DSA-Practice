class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    vector<int>v;
    void inorder(Node* root){
        if(!root)return;
        
        inorder(root->left);
        v.push_back(root->data);
        inorder(root->right);
    }
    bool isBST(Node* root) 
    {
        // Your code here
        inorder(root);
        vector<int>temp = v;
        sort(temp.begin(), temp.end());
        return v == temp;
    }
};
