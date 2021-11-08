#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;

    TreeNode(int x) : val(x),left(NULL),right(NULL)
    {}
};

class solution
{
    public : 
        //最近公共祖先
        TreeNode *dfs(TreeNode *root,int o1,int o2)
        {
            if(root == NULL || root->val == o1 || root->val == o2)
                return root;

            TreeNode *left = dfs(root->left,o1,o2);
            TreeNode *right = dfs(root->right,o1,o2);

            if(left != NULL && right != NULL)
                return root;
            
            return left != NULL ? left : right;
        }

        int ans(TreeNode *root,int o1,int o2)
        {
            return dfs(root,o1,o2)->val;
        }

};