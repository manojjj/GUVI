#include<stdio.h>
int main()
{
char z,a,e,i,o,u;
printf("Enter the vowel:");
scanf("%c",&z);
if(z=='a'||z=='e'||z=='i'||z=='o'||z=='u')
{
printf("vowel");
}else
{
printf("consonant");
}
return 0;
}