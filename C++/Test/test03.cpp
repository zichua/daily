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
        //二叉树之字遍历
        vector<vector<int >> algo(TreeNode *root)
        {
            vector<vector<int >> res;
            queue<TreeNode* > q;

            if(root == NULL)
                return res;

            int height = 1;//----------
            q.push(root);
            while(!q.empty())
            {
                vector<int > temp;
                int n = q.size();
                for(int i=0;i<n;i++)
                {
                    TreeNode *node = q.front();
                    q.pop();

                    if(height%2 == 0)
                    {
                        temp.insert(temp.begin(),node->val);
                    }
                    else
                    {
                        temp.push_back(node->val);
                    }

                    if(node->left != NULL)
                        q.push(node->left);
                    if(node->right != NULL)
                        q.push(node->right);
                }

                height++;
                res.push_back(temp);
            }

            return res;
        }

};