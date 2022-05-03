// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

// Your code goes here
Node *cur = root;
while(cur){
    if(key < cur->key){
        suc = cur;
        cur = cur->left;
    }
    else cur = cur->right;
}    
    cur = root;
    while(cur){
        if(key > cur->key){
            pre = cur;
            cur = cur->right;
        }
        else cur = cur->left;
    }
}
