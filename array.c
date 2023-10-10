//An array is a collection  of similar type of data. It is a cotiguous memory which is indexed frome 0 to n-1.
#include<stdio.h>
int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
        printf("\n Enter the number:");
        scanf("%d",&a[i]);


    }
    printf("\n Array elements are:");
    for(i=0;i<10;i++)
    printf("\n%d",a[i]);
    return 0;

}