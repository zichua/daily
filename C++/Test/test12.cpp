#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class solution
{
    public : 
        //括号匹配
        bool algo(string s)
        {
            stack<char> st;

            for(int i=0;i<s.size();i++)
            {
                if(s[i] == '(')
                    st.push(')');
                else if(s[i] == '{')
                    st.push('}');
                else if(s[i] == '[')
                    st.push(']');
                else if(st.empty())
                {
                    return false;
                }
                else if(st.top()!=s[i])
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
            return st.empty();
        }
};
