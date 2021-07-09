#include <stdio.h>

int main()
{
    int num=1,i,end,counter=0,j;
    printf("enter limit:");
    scanf("%d",&end);
    for(i=1;i<=end;i++)
    {
        for(j=1;j<=end;j++)
        {
            if(i%j==0)
            {
                counter++;
            }
        if(counter==2)
        {
            printf("%d",i);
        }
        }
    }
    return 0;
}