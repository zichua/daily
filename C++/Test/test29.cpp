#include <iostream>
#include <stack>

using namespace std;

class solution
{
    //两栈实现队列
    public :
        int algo()
        {
            if(stack2.empty())
            {
                while(!stack1.empty())
                {
                    stack2.push(stack1.top());
                    stack1.pop();
                }
            }

            int res = stack2.top();
            stack2.pop();
            return res;
        }


    private : 
        stack<int > stack1;
        stack<int > stack2;
};