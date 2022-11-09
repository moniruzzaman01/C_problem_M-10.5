#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <=i ; j++)
        {
            printf("%d ", j);
        }
        printf("\n");

        int gap = n - i;

        for (int k = 0; k <= gap; k++)
        {
            printf(" ");
        }
    }
        return 0;
}
