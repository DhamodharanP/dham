#include<stdio.h>
void main()
{
int a,i,count=0;
scanf("%s",&a);
for(i=3;i<a;i++)
{
if(a%i==0)
count++;
}
if(count==0)
{
printf("composite number");
else
printf("not composite number);
}
}
