#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, i, j;
    int sum = 0;

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}
