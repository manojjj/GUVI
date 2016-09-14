#include<stdio.h>
int main()
{
char c;
printf("enter the char:");
scanf("%c",&c);
if((c>='a'&&c<='z') || (c>='A'&&c<='Z'))
{
printf("%c Alphabet",c);
} else
{
printf("%c Not Alphabet",c);
}
return 0;
}