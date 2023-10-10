//pramid printing
#include<stdio.h>
int main()
{
    int n,i,b,j;
    printf("\nenter the number of row:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("\n");
        b=1;
        while (b<=n-i)
        {
            printf(" ");
            b++;
            j=1;
            while (j<=i*2-1)
            {
                   printf("*");
                   i++;
            } 
        }
        i=i+1;
        
    } 
    return 0;

}
