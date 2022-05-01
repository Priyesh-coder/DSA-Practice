class Solution
{
    public:
    vector<int>v;
    void func(Node* node, int level){
        if(node == NULL)return;
        if(v.size() == level){
            v.push_back(node->data);
        }
        func(node->right, level+1);
        func(node->left, level+1);
    }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       func(root,0);
       return v;
       
    }
};
