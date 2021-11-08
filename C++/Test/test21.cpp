#include <iostream>
#include <vector>

using namespace std;

class solution
{
    public : 
        //矩阵最小路径和
        int algo(vector<vector<int >> &martix)
        {
            int n = martix.size();
            int m = martix[0].size();
            int dp[n+10][m+10];
            dp[0][0] = martix[0][0];

            for(int i=1;i<n;i++)
            {
                dp[i][0] = dp[i-1][0] + martix[i][0];
            }
            for(int i=1;i<m;i++)
            {
                dp[0][i] = dp[0][i-1] + martix[0][i];
            }

            for(int i=1;i<n;i++)
            {
                for(int j=1;j<m;j++)
                {
                    dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + martix[i][j];
                }
            }

            return dp[n-1][m-1];
        }
};