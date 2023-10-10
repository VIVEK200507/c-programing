#include<stdio.h>//its not working to perfectuly then do perfecutly....
int main()
{
    int i,j,b;
    i=1;
    while(i<=5)
    {
        b=1;
        while(b<=5-i)
        {
            printf(" ");
            b++;
        }
        while (j<=i)
        {
            printf("\n");
            j++;
        }
        j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        
        
        i++;
    }
    return 0;
}