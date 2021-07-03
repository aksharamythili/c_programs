#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number:\n");
    scanf("%d",&a);
    if(a>0&&a!=0)
    {
        printf(" A is positive");
    }
    else if (a<0&&a!=0)
    {
        printf("A is nagative");
    }
     else
     {
        printf("a is zero");
     }
     return 0;
}