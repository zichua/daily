#include <iostream>
using namespace std;

void Merge(int *from, int *to, int begin, int middle, int end)
{
    int i = begin;
    int j = middle + 1;
    int k = i;

    while(i <= middle && j <= end)
    {
        if(from[i] < from[j])
            to[k++] = from[i++];
        else 
            to[k++] = from[j++];
    }

    while(i <= middle) 
        to[k++] = from[i++];
    while(j <= end) 
        to[k++] = from[j++];
}

void MergePass(int *from, int *to, int end, int h)
{
    int i = 0;
    while(i <= end - 2 * h + 1)
    {
        Merge(from, to, i, i + h - 1, i + 2 * h - 1);
        i += 2 * h;
    }

    if(i < end - h + 1)
        Merge(from, to, i, i + h - 1, end);
    else
        for(int k = i; k <= end; k++)
        {
            to[k] = from[k];
        }
}

void MergeSort(int *from, int *to, int begin, int end)
{
    int h = 1;
    while(h <= end)
    {
        MergePass(from, to, end, h);
        h = 2 * h;
        
        MergePass(to, from, end, h);
        h = 2 * h;
    }
}

int main() 
{
    int num[100];
    int num2[100];
    int n = 0;
    
    while(cin >> n)
    {
        for(int i = 0; i < n; i++)
        {
            int temp = 0;
            cin >> temp;
            num[i] = temp;
        }

        MergeSort(num, num2, 0, n - 1);
        
        for(int i = 0; i < n; i++)
            cout << num[i] << " ";
        cout << endl;
    }
    
    return 0;
}