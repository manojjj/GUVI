#include<stdio.h>
int main()
{
int i=1,n,sum;
printf("enter the values");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
printf("ans:%d",sum);
}
return 0;
}