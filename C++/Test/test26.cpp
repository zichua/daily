#include <iostream>
#include <vector>

using namespace std;

class solution
{
    public : 
        //跳台阶
        int algo(int num)
        {
            if(num == 1)
                return 1;
            if(num == 2)
                return 2;

            return algo(num-1) + algo(num-2);
        }

        int jump(int num)
        {
            if(num == 1)
                return 1;
            
            vector<int > dp(num+1,1);
            for(int i=2;i<=num;i++)
            {
                dp[i] = dp[i-1] + dp[i-2];
            }
            return dp[num];
        }

};