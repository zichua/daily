#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;

    TreeNode(int x) : val(x),left(NULL),right(NULL)
    {};
};

class solution
{
    public :
        //判断平衡二叉树（不看大小排序）
        int algo(TreeNode *root)
        {
            if(root == NULL)
                return 0;

            int lh = algo(root->left);
            int rh = algo(root->right);

            return max(lh,rh) + 1;
        }

        bool isbalance(TreeNode *root)
        {
            if(root == NULL)
                return true;

            if(!isbalance(root->left))
                return false;
            if(!isbalance(root->right))
                return false;

            int lh = algo(root->left);
            int rh = algo(root->right);

            if(abs(lh-rh) > 1)
                return false;

            return true;
        }
};