#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++ )
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++ )
    {
        int temp = 0;
        for (int j = 2; j < arr[i]; j++)
        {
            if(arr[i]%j==0)
            {
                temp++;
                break;
            }
        }
        if(temp==0)
        {
            count++;
        }
    }
    printf("%d\n", count);
    for (int i = 0; i < n; i++ )
    {
        int temp = 0;
        for (int j = 2; j < arr[i]; j++)
        {
            if(arr[i]%j==0)
            {
                temp++;
                break;
            }
        }
        if(temp==0)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
