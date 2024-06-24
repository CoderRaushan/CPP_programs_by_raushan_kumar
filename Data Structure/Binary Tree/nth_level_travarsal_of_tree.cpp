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
void BFS_traversal_usringQueue(TreeNode *root)
{
  queue<TreeNode*>que;
  que.push(root);
  while(que.size()>0)
  {
       TreeNode * temp=que.front();
       cout<<temp->val<<" ";
       que.pop();
       if(temp->left!=NULL) que.push(temp->left);
       if(temp->right!=NULL)que.push(temp->right);
  }
}
TreeNode * constructAtree(int arr[],int n)
{
   queue<TreeNode*>q;
   
   int i=1;
   int j=2;
   TreeNode * root = new TreeNode(arr[0]);
   q.push(root);
   while (q.size()>0 && i<n)
   {
       
       TreeNode * temp=q.front();
       q.pop();
       TreeNode * l;
       TreeNode * r;
       if(arr[i]!=INT_MIN) l=new TreeNode(arr[i]);
       else l=NULL;
       if(j!=n && arr[j]!=INT_MIN) r=new TreeNode(arr[j]);
       else r=NULL;
       temp->left=l;
       temp->right=r;
       if(l!=NULL) q.push(l);
       if(r!=NULL) q.push(r);
       i=i+2;
       j=j+2;
   }
   return root;
}
int main()
{
    // creating obj of treenode
    // TreeNode *a = new TreeNode(1);
    // TreeNode *b = new TreeNode(2);
    // TreeNode *c = new TreeNode(3);
    // TreeNode *d = new TreeNode(4);
    // TreeNode *e = new TreeNode(5);
    // TreeNode *f = new TreeNode(6);
    // TreeNode *g = new TreeNode(7);

    // buidling connection b/w them
    // a->left = b;
    // a->right = c;
    // b->left = d;
    // b->right = e;
    // c->left = f;
    // c->right = g;


    // nth_level(a,1,3);
    // cout<<endl;
    // nth_levelReverse(a,1,3);
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    TreeNode *root=constructAtree(arr,n);
    BFS_traversal_usringQueue(root);
    return 0;
}