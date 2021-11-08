#include <iostream>
#include <vector>

using namespace std;

class solution
{
    public : 
        //连续子数组的最大和
        int algo(vector<int > array)
        {
            vector<int > dp(array.size() + 10,0);
            dp[0] = array[0];

            int res = array[0];

            for(int i=1;i<array.size();i++)
            {
                dp[i] = max(dp[i-1] , 0) + array[i];
                res = max(res , dp[i]);
            }
            return res;
        }

};