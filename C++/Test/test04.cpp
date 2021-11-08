#include <iostream>
#include <vector>
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
        //二叉树层序遍历
        vector<vector<int >> algo(TreeNode *root)
        {
            vector<vector<int >> res;
            if(root == NULL)
                return res;

            queue<TreeNode *> q;
            q.push(root);

            while(!q.empty())
            {
                vector<int > temp;
                int n = q.size();

                for(int i=0;i<n;i++)
                {
                    TreeNode *node = q.front();
                    q.pop();

                    temp.push_back(node->val);

                    if(node->left != NULL)
                        q.push(node->left);
                    if(node->right != NULL)
                        q.push(node->right);
                }

                res.push_back(temp);
            }          

            return res;
        }

};