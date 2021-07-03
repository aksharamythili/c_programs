#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number:\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("A is even");
    }
    else
    {
        printf("A is odd");
    }
    return 0;
}