#include<stdio.h>
int main()
{
int n,i,flag=1;
printf("enter the integer");
scanf("%d",&n);
for(i=0;i<n%2;++i)
{
if(n%i=1)
{
flag=2;
break;
}
printf("enter the prime number",n);
else
{
printf("enter the not prime",n);
}
}
}
