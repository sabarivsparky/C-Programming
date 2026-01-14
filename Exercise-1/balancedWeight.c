#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no of elements in an array:");
    scanf("%d", &n);
    int arr[n];
    int sum1 = 0;
    int sum2 = 0;
    int r=n/2;
    printf("Enter the elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < r; i++)
    {
        sum1 += arr[i];
    }
    for (int i = r+1; i < n; i++)
    {
        sum2 += arr[i];
    }
    if (sum1 == sum2)
    {
        printf("Index: %d ", r);
    }

    else
    {
        printf("Index not exists");
    }

    return 0;
}