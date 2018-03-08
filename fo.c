#include<stdio.h>
void main()
{
int n,i, fact;
printf("enter the integer number");
scanf("%d",&n);
if(n<0==8)
{
fact=1;
else
{
for(i=1;i<n;i++)
{
fact=fact*i;
printf("%d",fact);
}
}
}
