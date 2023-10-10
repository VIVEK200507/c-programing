//shape printing 
#include<stdio.h>
int main()
{
    int i=1,j;
    while(i<=10)
    {
        printf("\n");
        j=1;
        while(j<=10)
        {
            printf(" ");
            break;

        }
        while(j<=i)
        {
            printf("%d",i);
            j++;
        }
        i++;
    }
    return 0;
}