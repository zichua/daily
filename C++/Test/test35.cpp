#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class solution
{
    public : 
        //记录最小数的栈
        vector<int > algo(vector<vector<int >> &op)
        {
            vector<int > res;

            for(int i=0;i<op.size();i++)
            {
                if(op[i][0] == 1)
                {
                    Push(op[i][1]);
                }
                else if(op[i][0] == 2)
                {
                    Pop();
                }
                else
                {
                    res.push_back(getmin());
                }
            }
            return res;
        }

        void Push(int x)
        {
            s.push(x);
            if(min_s.empty() || min_s.top() >= x)
                min_s.push(x);
        }

        void Pop()
        {
            if(!s.empty())
            {
                if(s.top() == min_s.top())
                    min_s.pop();
                s.pop();
            }
        }

        int getmin()
        {
            return min_s.top();
        }

    private : 
        stack<int > s , min_s;
};