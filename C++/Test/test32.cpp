#include <iostream>
#include <vector>

using namespace std;

class solution
{
    public : 
        //股票(二次交易)
        int algo(vector<int > &price)
        {
            if(price.size() == 0)
                return 0;
            
            int dp[100][5] = {0};
            dp[0][1] = dp[0][3] = -price[0];

            for(int i=1;i<price.size();i++)
            {
                dp[i][0] = dp[i-1][0];

                dp[i][1] = max(dp[i-1][1] , dp[i-1][0] - price[i]);

                dp[i][2] = max(dp[i-1][2] , dp[i-1][1] + price[i]);

                dp[i][3] = max(dp[i-1][3] , dp[i-1][2] - price[i]);

                dp[i][4] = max(dp[i-1][4] , dp[i-1][3] + price[i]);

            }
            return dp[price.size()-1][4];
        }

};