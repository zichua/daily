#include <iostream>
#include <iostream>
#include <queue>

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
        //判断二叉树镜像
        bool algo(TreeNode *root)
        {
            if(root == NULL)
                return true;

            queue<TreeNode *> q;
            q.push(root->left);
            q.push(root->right);

            while(!q.empty())
            {
                TreeNode *node_01 = q.front();
                q.pop();
                TreeNode *node_02 = q.front();
                q.pop();

                if(node_01 == NULL && node_02 == NULL)
                    continue;
                if(node_01 == NULL || node_02 == NULL || node_01->val != node_02->val)
                    return false;

                q.push(node_01->left);
                q.push(node_02->right);
                q.push(node_01->right);
                q.push(node_02->left);
            }

        return true;
        }

};