#include<stdio.h>
int main(){
    int t,sum,x,y,z;
    int arr[10];
    printf("Enter the total no of test cases:");
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        printf("\nEnter the 5rs Coins , 10rs coins and price of the chocolate respectively:");
        scanf("%d %d %d",&x,&y,&z);
        sum=(x*5)+(y*10);
        arr[i]=sum/z;
    }
    for (int i = 0; i < t; i++)
    {
        printf("\n%d", arr[i]);
    }
    return 0;
}