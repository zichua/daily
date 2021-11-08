#include <iostream>

using namespace std;

class solution
{
    public : 
        int algo(const char* str)
        {
            if(str == NULL)	
                return -1;
        
            int carry[4] = 
            {
                1 + 25 + 25 * 25 + 25 * 25 * 25,
                1 + 25 + 25 * 25,
                1 + 25,
                1
            };

            int Index = 0;
            for(int i=0;i<4;i++)
            {
                if(str[i] >= 'a' && str[i] <= 'y')
                {
                    Index = Index + (str[i] - 'a') * carry[i];
                    if(i != 0)	
                        ++Index;
                }
            }
            return Index;
        }
};
