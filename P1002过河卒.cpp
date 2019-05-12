#include <cstdio>
#include <cstring>
long long B[21][21]; //设定棋盘
int main()
{
    int i, j, n, m, a, b;
    scanf("%d%d%d%d", &n, &m, &a, &b); //(n,m)为B点，(a,b)为马所在点
    //memset(B, 1, sizeof(B));
    for (i = 0; i <= n; i++)
        for (j = 0; j <= m; j++)
            B[i][j] = 1;
    if (a - 2 >= 0 && b - 1 >= 0)
        B[a - 2][b - 1] = 0;
    if (a - 2 >= 0 && b + 1 <= m)
        B[a - 2][b + 1] = 0;
    if (a - 1 >= 0 && b - 2 >= 0)
        B[a - 1][b - 2] = 0;
    if (a - 1 >= 0 && b + 2 <= m)
        B[a - 1][b + 2] = 0;
    if (a + 1 <= m && b - 2 >= 0)
        B[a + 1][b - 2] = 0;
    if (a + 2 <= n && b - 1 >= 0)
        B[a + 2][b - 1] = 0;
    if (a + 1 <= n && b + 2 <= m)
        B[a + 1][b + 2] = 0;
    if (a + 1 <= n && b + 1 <= m)
        B[a + 2][b + 1] = 0;
    B[a][b] = 0; //所有马能走到的点为0
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= m; j++)
        {
            if (B[i][j])
            {
                if (i == 0 && j == 0)
                    continue;
                else if (i == 0)
                    B[i][j] = B[i][j - 1];
                else if (j == 0)
                    B[i][j] = B[i - 1][j];
                else
                    B[i][j] = B[i - 1][j] + B[i][j - 1];
            }
        }
    }
    printf("%lld", B[n][m]);
    return 0;
}