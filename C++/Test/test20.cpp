#include <iostream>
#include <map>
#include <vector>

using namespace std;

class solution
{
    //两数之和(哈希表)
    vector<int > algo(vector<int > &numbers,int target)
    {
        vector<int > res;
        map<int,int> mp;

        for(int i=0;i<numbers.size();i++)
        {
            if(mp.find(target - numbers[i]) != mp.end() && i != mp[target - numbers[i]])
            {
                res.push_back(i+1);
                res.push_back(mp[target - numbers[i]] + 1);
                return res;
            }
        }
        return res;
    }
};