#include<stdio.h>
int main()
//just example of nested loop using while..
{
    int i=1;
    while(i<=5)
    {
        int j=1;
        while(j<=5)
        {
            printf("%d\n",j);
            j++;
        }
        i++;
    }
    return 0;
}