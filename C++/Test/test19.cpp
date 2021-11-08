#include <iostream>
#include <vector>

using namespace std;

class solution
{
    //两数之和(暴力)
    vector<int > algo(vector<int > &numbers,int target)
    {
        vector<int > res;

        for(int i=0;i<numbers.size();i++)
        {
            int temp = target - numbers[i];

            for(int j=0;j<numbers.size();j++)
            {
                if(temp == numbers[j])
                {
                    res.push_back(i+1);
                    res.push_back(j+1);
                    return res;
                }
            }
        }
        return res;
    }
};