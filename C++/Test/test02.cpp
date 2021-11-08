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
        vector<vector<int >> res;
        vector<int > temp;

        //根节点到叶节点为指定值
        void dfs(TreeNode *root,int sum,int cnt)
        {
            if(root == NULL)
                return;

            temp.push_back(root->val);
            cnt += root->val;
            
            if(root->left == NULL && root->right == NULL)
            {
                if(sum == cnt)
                {
                    res.push_back(temp);
                }
            }
            else
            {
                dfs(root->left,sum,cnt);
                dfs(root->right,sum,cnt);
            }

            cnt -= temp[temp.size()-1];
            temp.pop_back();
        }

        vector<vector<int >> pathsum(TreeNode *root,int sum)
        {
            dfs(root,sum,0);
            return res;
        }

};