#include<stdio.h>
int main()
{
int num,giv,rem,odd=0,digits;
printf("enter the integer number");
scanf("%d",&num);
giv=num;
num=abs(num);
while(num>0)
{
digits=num%10;
num=num%10;
rem=num%2;
if(rem!=0)
{
odd=odd+digits;
}
printf("\n odd digits number",odd,giv);
}
}
