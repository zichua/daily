#include <iostream>
#include <vector>

using namespace std;

class solution
{
    //股票最大值
    int maxPro(vector<int> &prices)
    {
        if(prices.size() == 0)
            return 0;

        int dp[prices.size()][2];
        dp[0][0] = 0;
        dp[0][1] = prices[0];

        for(int i=1;i<prices.size();i++)
        {
            dp[i][0] = max(dp[i-1][0],prices[i]-dp[i-1][1]);
            dp[i][1] = min(dp[i-1][1],prices[i]);
        }
        return dp[prices.size()-1][0];
    }
};

class solution
{
    int maxpro(vector<int> &prices)
    {
        if(prices.size() == 0)
            return 0;

        int dp[2];
        dp[0] = 0;
        dp[1] = prices[0];

        for(int i=1;i<prices.size();i++)
        {
            dp[0] = max(dp[0],prices[i]-dp[1]);
            dp[1] = min(dp[1],prices[i]);
        }
        return dp[0];
    }
};

class solution
{
    public : 
        int maxpro(vector<int> &prices)
        {
            if(prices.size() == 0)
                return 0;

            int min_input = prices[0];
            int max_output = 0;

            for(int i=1;i<prices.size();i++)
            {
                min_input = min(min_input,prices[i]);
                max_output = max(max_output,prices[i]-min_input);
            }
            return max_output;
        }
};
