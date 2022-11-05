//array sorting

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n;i++)
    {
        scanf("%d", &arr[i]);
    }
    //conditions
    for (int i = 0; i < n;i++)
    {
        for (int j = i + 1; j < n;j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
        // output
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        return 0;
}
