void leftBoundary(TreeNode<int> *root, vector<int> &ans) 
{
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) return; // Exclude leaf node
    ans.push_back(root->data);
    if (root->left!=NULL) leftBoundary(root->left, ans);
    else leftBoundary(root->right, ans); // If left node is end then move to right node
}
void rightBoundary(TreeNode<int> *root, vector<int> &ans) 
{
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) return; // Exclude leaf node
    if (root->right) rightBoundary(root->right, ans);
    else rightBoundary(root->left, ans); // If right node is end then move to left node
    ans.push_back(root->data); // Store in reverse order
}
void leafNodes(TreeNode<int> *root, vector<int> &ans) 
{
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) 
    {
        ans.push_back(root->data);
        return;
    }
    leafNodes(root->left, ans);
    leafNodes(root->right, ans);
}
vector<int> traverseBoundary(TreeNode<int> *root) 
{
    vector<int> ans;
    if (root == NULL) return ans;
    ans.push_back(root->data);
    if (root->left) leftBoundary(root->left, ans);
    leafNodes(root, ans);
    if (root->right) rightBoundary(root->right, ans);
    return ans;
}

