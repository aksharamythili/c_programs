#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number to write table:");
    scanf("%d",&num);
    for(i=10;i;i--)
    {
        printf("table of is %d*%d=%d \n",num,i,num*i);
    }
    return 0;
}