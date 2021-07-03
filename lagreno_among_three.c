#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
    printf("enter third number:\n");
    scanf("%d",&c);
if(a>b&&a>c)
{
    printf("a is large %d",a);
}
else if(b>c&&b>a)

{
printf("B is graet",b);
}
else
{
    printf("c is large",c);
}
return 0;
}
