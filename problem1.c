//fibonacci series

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int f = 0, s = 1;
    printf("%d %d ", f,s);
    for (int i = 1; i < n-1;i++)
    {
        int t = f + s;
        printf("%d ", t);
        f = s;
        s = t;
    }
        return 0;
}
