#include <iostream>
#include <vector>
#include <map>

using namespace std;

class solution
{
    //至出现一次的数
    void algo(vector<int > data , int *num_01 , int *num_02)
    {
        map<int,int> map;
        for(int i=0;i<data.size();i++)
        {
            map[data[i]]++;
        }

        vector<int > res;
        for(int i=0;i<data.size();i++)
        {
            if(map[data[i]] == 1)
            {
                res.push_back(data[i]);
            }

            if(res.size() >= 2)
                break;
        }

        *num_01 = res[0];
        *num_02 = res[1];
    }
};