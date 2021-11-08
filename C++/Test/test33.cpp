#include <iostream>
#include <vector>

using namespace std;

class solution
{
    public : 
        //换钱的最小货币数
        int algo(vector<int > &arr , int aim)
        {
            int max = aim + 1;
            vector<int > dp(aim+1,max);

            dp[0] = {0};
            for(int i = 1; i <= aim ; i++)
            {
                for(int j=0;j<arr.size();j++)
                {
                    if(arr[j] <= i)
                    {
                        dp[i] = min(dp[i] , dp[i - arr[j]] + 1);
                    }
                }
            }
            return dp[aim] > aim ? -1 : dp[aim];
        }
};
