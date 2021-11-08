#include <iostream>

class solution
{
    //斐波那契
    int algo(int n)
    {
        if(n <= 1)
            return n;
        if(n == 2)
            return 1;

        return algo(n-1) + algo(n-2);
    }
};