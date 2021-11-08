#include <iostream>

using namespace std;

class solution
{
    //合并两个有序数组
    void algo(int a[],int b[],int m,int n)
    {
        int i = m - 1;
        int j = n - 1;
        int index = m + m - 1;

        while(i>=0 && j>=0)
        {
            a[index--] = a[i]>b[j] ? a[i--] : b[j--];
        }

        while(j>=0)
        {
            a[index--] = b[j]--;
        }

    }
};