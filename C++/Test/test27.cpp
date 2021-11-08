#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

class solution
{
    public : 
        //进制转换
        string algo(int M,int N)
        {
            if(M == 0)
                return "0";
            
            bool flag = false;
            if(M < 0)
            {
                flag = true;
                M = -M;
            }

            string res = "";
            string jz = "0123456789ABCDEF";

            while(M!=0)
            {
                res += jz[M%N];
                M /= N;
            }

            reverse(res.begin(),res.end());

            if(flag)
                res.insert(0,"-");
            return res;
        }

};