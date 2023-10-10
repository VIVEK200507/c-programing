#include<stdio.h>
int main()
//armstrong number this programe have a problem so then slove this then run
{
    int i,sum=0,x=i;
    printf("\nEnter number to check:");
    scanf("%d",&i);
    while(i>0)
    {
        sum=(i%10)*(i%10)*(i%10);
        i=i/10;
    }
    if(sum==x)
    printf("\nArmstrong numebr");
    else
    printf("\nNot a armstorng number");
    return 0;
}