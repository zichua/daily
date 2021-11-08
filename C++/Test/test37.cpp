#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class solution
{
    public : 
        //栈和排序
        vector<int > algo(int *a,int len)
        {
            stack<int > s;
            int n = len;
            vector<int > res;
            vector<bool > vis(len+10,0);

            for(int i=0;i<len;i++)
            {
                s.push(a[i]);
                vis[a[i]] = 1;

                while(n && vis[n])
                    n--;

                while(!s.empty() && n <= s.top())
                {
                    res.push_back(s.top());
                    s.pop();
                }
            }

            while(!s.empty())
            {
                int temp = s.top();
                res.push_back(temp);
                s.pop();
            }

            return res;
        }
};