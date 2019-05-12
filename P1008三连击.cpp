#include <cstdio>
#include <cstring>

int main()
{
    int i, a[10], b, j; //i表示第一个数,a用来存储数字
    
    for (i = 123; i <= 329; i++)
    {
        memset(a, 0, sizeof(a));
        a[i % 10] = 1;
        a[i / 10 % 10] = 1;
        a[i / 100] = 1;
        a[2 * i % 10] = 1;
        a[2 * i / 10 % 10] = 1;
        a[2 * i / 100] = 1;
        a[3 * i % 10] = 1;
        a[3 * i / 10 % 10] = 1;
        a[3 * i / 100] = 1;
        for (j = 1; j < 10; j++)
        {
            if (a[j] == 1)
                b = 1;
            else
            {
                b = 0;
                break;
            }
        }
        if (b == 1)
            printf("%d %d %d\n", i, 2 * i, 3 * i);
    }
    getchar();
}