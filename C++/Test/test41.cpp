#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

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
        vector<int > algo(TreeNode *root) //非递归先序遍历二叉树
        {
            vector<int > res;
            stack<TreeNode* > tmp;

            if(root == NULL)
                return res;

            tmp.push(root);
            while(!tmp.empty())
            {
                auto x = tmp.top();
                tmp.pop();
                res.push_back(x->val);

                if(x->right)
                    tmp.push(x->right);
                if(x->left)
                    tmp.push(x->left);
            }

            return res;
        }

        vector<int > algo(TreeNode *root) //非递归中序遍历二叉树
        {
            vector<int > res;
            stack<TreeNode* > s;

            if(root == NULL)
                return res;

            while(s.size() || root)
            {
                while(root)
                {
                    s.push(root);
                    root = root->left;
                }

                if(s.size())
                {
                    root = s.top();
                    s.pop();
                    res.push_back(root->val);
                    root = root->right;
                }
            }

            return res;
        }

        vector<int > algo(TreeNode *root) //非递归后序遍历二叉树
        {
            vector<int > res;
            stack<TreeNode* > tmp;

            if(root == NULL)
                return res;

            tmp.push(root);
            while(!tmp.empty())
            {
                auto x = tmp.top();
                tmp.pop();
                res.push_back(x->val);

                if(x->left)
                    tmp.push(x->left);
                if(x->right)
                    tmp.push(x->right);
            }
            reverse(res.begin(),res.end());

            return res;
        }
};