#include <iostream>
#include <vector>

using namespace std;

class solution
{
    //子数组最大累加和
    int algo(vector<int > &arr)
    {
        int dp[arr.size()];
        dp[0] = arr[0];
        int res = arr[0];

        for(int i=1;i<arr.size();i++)
        {
            dp[i] = max(0,dp[i-1]) + arr[i];
            res = max(res,dp[i]);
        }
        return res;
    }
};
