#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j, k, sum;
    printf("Enter values of matrix-1:");
    for (i = 0; i < 3; i++)
    {
        printf("Row-%d:\n", i);
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter values of matrix-2:");
    for (i = 0; i < 3; i++)
    {
        printf("Row-%d:\n", i);
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (k = 0; k < 3; k++)
    {
        for (i = 0; i < 3; i++)
        {
            c[k][i] = 0;
            for (j = 0; j < 3; j++)
            {
                // c[0][0] = a[0][j]*b[j][0] + a[0][1]*b[1][0] + a[0][2]*b[2][0]
                c[k][i] = c[k][i] + a[k][j] * b[j][i];

                // c[0][1] = a[0][0]*b[0][1] + a[0][1]*b[1][1] + a[0][2]*b[2][1]
                // c[0][2] = a[0][0]*b[0][2] + a[0][1]*b[1][2] + a[0][2]*b[2][2]

                // c[1][0] = a[1][0]*b[0][0] + a[1][1]**b[1][0] + a[1][2]*b[2][0]
            }
        }
    }
    return 0;
}