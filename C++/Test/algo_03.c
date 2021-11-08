#include <stdio.h>

char* ans[2000010] = {0};
int a[2000010] = {0},flag[2000010] = {0};
int index = 0;

void dfs(char *seed,int pos,int n)
{
    if(pos == n)
    {
        for(int i=0;i<n;i++)
            ans[index][i] = a[i];
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(flag[i])
                continue;
            a[pos] = seed[i];
            flag[i] = 1;
            dfs(seed,pos+1,n);
            flag[i] = 0;
        }
    }
}

char **algo(char *seed,int seedLen,int size,int *returnSize)
{
    int n;
    scanf("%d",&n);

    dfs(seed,0,n);
    *returnSize = index;

    return ans;
}
