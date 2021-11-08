#include <iostream>
#include <vector>

using namespace std;

class solution
{
    public : 
        //只出现一次的数(位运算)
        void algo(vector<int > data,int *num_01,int *num_02)
        {
            int n = data.size();
            int eor = 0;

            for(int i=0;i<n;i++)
            {
                eor ^= data[i];
            }

            int right_one = eor & (~eor + 1);
            int only_one = 0;
            for(int i=0;i<n;i++)
            {
                if((data[i] & right_one) != 0)
                {
                    only_one ^= data[i];
                }
            }

            *num_01 = only_one;
            *num_02 = (eor ^ only_one);
        }

};