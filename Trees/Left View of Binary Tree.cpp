vector<int>v;

void func(Node* root, int level){
    if(root == NULL)return;
    
    if(v.size() == level){
        v.push_back(root->data);
    }
    func(root->left, level+1);
    func(root->right, level+1);
}
vector<int> leftView(Node *root)
{
   // Your code here
   v.clear();
   func(root,0);
   return v;
   
}
