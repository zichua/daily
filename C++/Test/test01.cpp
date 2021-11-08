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
        //求二叉树镜像
        void mirror(TreeNode *proot)
        {
            if(proot)
            {
                TreeNode *temp = proot->left;
                proot->left = proot->right;
                proot->right = temp;

                mirror(proot->left);
                mirror(proot->right);
            }
        }
};