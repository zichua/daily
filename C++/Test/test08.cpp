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
        //二叉树最大深度
        int algo(TreeNode *root)
        {
            if(root == NULL)
                return 0;

            int lh = algo(root->left);
            int rh = algo(root->right);

            return max(lh,rh) + 1;
        }
};