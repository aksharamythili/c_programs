#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number:\n");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    if(a<b)
    {
        printf("B is large number:%d",b);
    }
    else
    {
printf("A is larger:%d",a);
    }
    return 0;
}