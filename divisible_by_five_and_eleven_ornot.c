#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number:\n");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("divisible by 5 ");
    }
    else if(a%11==0)
    {
        printf("divisile by 11");
    }
else
{
printf("not didvisible by 5 and 11");
}
return 0;
}