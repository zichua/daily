#include <iostream>

using namespace std;

class solution
{
    public :
        //反转str 
        string algo(string str)
        {
            int len = str.size();

            for(int i=0;i<len/2;i++)
            {
                swap(str[i],str[len-i-1]);
            }
            return str;
        }
};