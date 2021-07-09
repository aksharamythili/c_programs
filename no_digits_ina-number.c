#include<stdio.h>
int main()
{
    int num,counter=0;
    printf("enter number to find number of digits");
    scanf("%d",&num);
    while(num!=0)
    {
        num=num/10;
        counter++;
    }
    printf("no of digits in %d is%d",num,counter);
    return 0;

}