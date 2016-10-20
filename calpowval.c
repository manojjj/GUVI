#include <stdio.h>
 
int main()
{
int base,exponent,result;
printf("enter the base:");
scanf("%d",&base);
printf("enter the exponent:");
scanf("%d",&exponent);
result=pow(base,exponent);
printf("answer:%d",result);
 
return 0;
}