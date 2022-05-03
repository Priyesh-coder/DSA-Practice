class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    void helper(Node* root, vector<int>& v){
        if(!root) return;
        helper(root->left,v);
        v.push_back(root->data);
        helper(root->right,v);
    }
    bool isBST(Node* root){
        vector<int>v;
        helper(root,v);
        for(int i=1; i<v.size(); i++){
            if(v[i] <= v[i-1]) return false;
        }
        return true;
    }
    int noOfNodes(Node* root){
        if(!root) return 0;
        
        return 1 + noOfNodes(root->left) + noOfNodes(root->right);
    }
    int largestBst(Node *root)
    {
    	//Your code here
    	if(!root)return 0;
    	if(isBST(root)) return noOfNodes(root);
    	return max(largestBst(root->left),largestBst(root->right));
    }
};
