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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2!=0)
        {
            sum += arr[i];
        }
    }
    //output
    if(sum%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
