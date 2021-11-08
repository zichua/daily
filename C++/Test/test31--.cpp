#include <iostream>
#include <vector>

using namespace std;

class solution
{
    public : 
        //数字翻译字符串
        int algo(string nums)
        {
            if(nums[0] == '0')
                return 0;

            vector<int > dp(nums.size()+10,0);
            dp[0] = 1;

            for(int i=1;i<nums.size();i++)
            {
                if(nums[i] == '0')
                {
                    if(nums[i-1] == '1' || nums[i-1] == '2')
                    {
                        if(i == 1)
                            dp[i] = 1;
                        else
                            dp[i] = dp[i-2];

                    }
                }
                else if(nums[i-1] == '1' || (nums[i-1] == '2' && nums[i]>='1' && nums[i]<='6'))
                {
                    if(i == 1)
                    {
                        dp[i] = 2;
                    }
                    else
                    {
                        dp[i] = dp[i-1] + dp[i-2];
                    }
                }
                else
                {
                    dp[i] = dp[i-1];
                }

            }        
            return dp[nums.size()-1];
        }
};