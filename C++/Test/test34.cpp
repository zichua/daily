#include <iostream>
#include <vector>

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
        //递归遍历二叉树
        void preorder(TreeNode *root)
        {
            if(root == NULL)
                return;

            pre.push_back(root->val);
            preorder(root->left);
            preorder(root->right);
        }

        void inorder(TreeNode *root)
        {
            if(root == NULL)
                return;

            inorder(root->left);
            in.push_back(root->val);
            inorder(root->right);
        }

        void postorder(TreeNode *root)
        {
            if(root == NULL)
                return;

            inorder(root->left);
            inorder(root->right);
            post.push_back(root->val);
        }
        
        vector<vector<int >> algo(TreeNode *root)
        {
            vector<vector<int >> res;

            if(root == NULL)
                return ;

            preorder(root);
            inorder(root);
            postorder(root);

            res.push_back(pre);
            res.push_back(in);
            res.push_back(post);

            return res;
        }

    private : 
        vector<int > pre;
        vector<int > in;
        vector<int > post;
};