#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class solution
{
    public : 
        //最大数
        static bool cmp(string a,string b)
        {
            return a + b > b + a;
        }

        string algo(vector<int > &nums)
        {
            vector<string > ve;

            for(int i=0;i<nums.size();i++)
            {
                ve.push_back(to_string(nums[i]));
            }

            sort(ve.begin(),ve.end(),cmp);
            if(ve[0] == "0")
                return "0";
            
            string res = "";
            for(int i=0;i<ve.size();i++)
            {
                res += ve[i];
            }

            return res;
        }
};