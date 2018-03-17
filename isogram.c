#include<stdio.h>
#include<string.h>
int main()
{
char str[10];
char a="Helloworld";
printf("%d",a);
int n,i,d;
printf("enter the number");
scanf("%s",&n);
for(i=0;i<=n;i++)
{
 d=d+i;
if(n%2==0)
{
 printf("yes");
}
else
{
printf("no");
}
}
return 0;
}
