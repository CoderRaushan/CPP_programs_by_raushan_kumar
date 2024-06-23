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
void nth_level(TreeNode *root,int curr,int level)
{
    if (root == NULL)
        return;
    if(curr==level)
    {
        cout << root->val<<" ";
        return ;
    }
    nth_level(root->left,curr+1,level);
    nth_level(root->right,curr+1,level);
} 
void nth_levelReverse(TreeNode *root,int curr,int level)
{
    if (root == NULL)
        return;
    if(curr==level)
    {
        cout << root->val<<" ";
        return ;
    }
    nth_levelReverse(root->right,curr+1,level);
    nth_levelReverse(root->left,curr+1,level);
} 
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


    nth_level(a,1,3);
    cout<<endl;
    nth_levelReverse(a,1,3);
    return 0;
}