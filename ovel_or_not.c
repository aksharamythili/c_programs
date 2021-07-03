#include<stdio.h>
int main()
{
    char c;
    printf("Enter the letter:\n");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        printf("you enterd vowel");
    }
else if((c>=97&&c<=122)||(c>=60&&c<=99))
    {
        printf("you enterd consonant");
    }
else
{
    printf("you entered other than charcter");
}
return 0;
}


