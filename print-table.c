#include<stdio.h>
int main()
//print the table
{
    int n,i=1;
    printf("Enter the number for print the table=");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("\n%d",n*i);
        i=i+1;
    }
    return 0;
}