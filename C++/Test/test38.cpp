#include <iostream>
#include <vector>

using namespace std;

class solution
{
    public :    
        //数组超过一半的数
        int algo(vector<int > nums)
        {
            int cnt = 0;
            int res = 0;

            for(int i=0;i<nums.size();i++)
            {
                if(cnt == 0)
                    res = nums[i];

                cnt += ((nums[i] == res) ? 1 : -1);
            }

            cnt = 0;

            for(int i=0;i<nums.size();i++)
            {
                if(res == nums[i])
                    cnt++;
                
                if(cnt > (nums.size()/2))
                    return res;
            }
            return 0;
        }
};