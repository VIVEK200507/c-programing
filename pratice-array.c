#include<stdio.h>
int main()
{
    int a[20],i;
    for(i=0;i<=20;i++)
    {
        printf("\n Enter the number for array:");
        scanf("%d",&a[i]);
    }
    printf("\nReview of array:");
    for(i=0;i<=20;i++)
    printf("\n%d",a[i]);
    return 0;

}