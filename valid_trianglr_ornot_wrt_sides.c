#include <stdio.h>
int main()
{
    int side1,side2,side3;
    printf("enter side1:");
    scanf("%d",&side1);
    printf("enter side2:");
    scanf("%d",&side2);
    printf("enter side3:");
    scanf("%d",&side3);
    if(side1+side2>side3&&side2+side3>side1&&side1+side3>side2)
    {
        printf("valid triangle");
    }
    else
{
    printf("invalid");
}
return 0;
}