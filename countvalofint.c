#include<stdio.h>
int main()
{
int m,c=0;
printf("enter the value:\n");
scanf("%d",&m);
while(m>0)
{
m/=10;
c++;
printf("count value of integer: %d",c);
}
return 0;
}