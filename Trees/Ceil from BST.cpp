int findCeil(BinaryTreeNode<int> *root, int x){
    // Write your code here.
	int ceil = -1;
	while(root){
		if(root->data == x){
			ceil = root->data;
			return ceil;
		}
		if(x > root->data){
			root = root->right;
		}
		else{
			ceil = root->data;
			root = root->left;
		}
	}
	return ceil;
}
