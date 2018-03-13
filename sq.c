#include<stdio.h>
int main()
{
int a=5,b=5,n;
printf("enter a value");
scanf("%d",&n);
printf("enter b value");
scanf("%d",&n);
for(a=0;a<=n;a++)
{
if(n==a*a)
{
printf("no");
return 0;
}
else
printf("yes");
return 0;
}
for(b=0;b<=n;b++)
{
if(n==b*b)
{
printf("no");
return 0;
}
else
{
printf("yes");
return 0;
}
}
}
