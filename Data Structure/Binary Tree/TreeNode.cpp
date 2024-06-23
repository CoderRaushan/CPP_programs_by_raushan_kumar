#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    // tree node
    TreeNode *left;
    int val;
    TreeNode *right;
    // constructor of treenode
    TreeNode(int val)
    {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
// display function
// preorder traversal
void displaypre(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->val<<" ";
    displaypre(root->left);
    displaypre(root->right);
} 
// inorder traversal
void displayin(TreeNode *root)
{
    if (root == NULL)
        return; 
    displayin(root->left);
    cout << root->val<<" ";
    displayin(root->right);
} 
// postorder traversal
void displaypost(TreeNode *root)
{
    if (root == NULL)
        return;
    displaypost(root->left);
    displaypost(root->right);
    cout << root->val<<" ";
} 
// sum of nodes 
int sumof(TreeNode *root)
{
    if(root==NULL) return 0;
    return root->val+sumof(root->left)+sumof(root->right);
}
// size of nodes
int sizeofnode(TreeNode *root)
{
    if(root==NULL) return 0;
    return 1+sizeofnode(root->left)+sizeofnode(root->right);
}
// maximum in nodes
int maximumofnode(TreeNode *root)
{
    if(root==NULL) return INT_MIN;
    return max(root->val,max(maximumofnode(root->left),maximumofnode(root->right)));
}
// levels of treenode
//height=levels-1;
int levelsofnode(TreeNode *root)
{
    if(root==NULL) return 0;
    return 1+max(levelsofnode(root->left),levelsofnode(root->right));
}
// hw ->product of all nodes
//      mini of all nodes
//symmetry tree
int main()
{
    // creating obj of treenode
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(3);
    TreeNode *d = new TreeNode(4);
    TreeNode *e = new TreeNode(5);
    TreeNode *f = new TreeNode(6);
    TreeNode *g = new TreeNode(7);

    // buidling connection b/w them
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    displaypre(a);
    cout<<endl;
    cout<<sumof(a)<<endl;
    cout<<sizeofnode(a)<<endl;
    cout<<maximumofnode(a)<<endl;
    cout<<levelsofnode(a)<<endl;
    cout<<"preorder"<<endl;
    displaypre(a);
    cout<<endl;
    displayin(a);
    cout<<endl;
    displaypost(a);
    return 0;
}