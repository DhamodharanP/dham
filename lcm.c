#include<stdio.h>
int main()
{
int a=10,b=5,minmultiple;
printf("enter the integer value");
scanf("%d",&minmultiple);
minmultiple=(a>b)? a:b;
while(1)
{
if(minmultiple%a==0 &&minmultiple%b==0)
{
printf("LCM numbers",a,b,minmultiple);
break;
}
++minmultiple;
}
return 0;
}
