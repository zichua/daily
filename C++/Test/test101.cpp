#include <stdio.h>

void func(int m,int n)
{
    int tp = m*n;
    int t = 0;

    while(t = m%n)d
    {
        m = n;
        n = t;
    }
    tp /= n;

    printf("最大共约数 %d,最小公倍数 %d",n,tp);

    return;
}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);

    func(m,n);

    return 0;
}