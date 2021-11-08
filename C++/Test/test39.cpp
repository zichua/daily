#include <iostream>
#include <vector>

using namespace std;

class solution
{
    public : 
        //股票(无线交易)
        int algo(vector<int > &arr)
        {
            int res = 0;

            for(int i=1;i<arr.size();i++)
            {
                if(arr[i] > arr[i-1])
                {
                    res += (arr[i] - arr[i-1]);
                }
            }
            return res;
        }
};