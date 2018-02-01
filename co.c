#include<stdio.h>
void main()
{
char s[100];
int count=0,i;
printf("enter the string");
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
 count++;
 printf("increment of count");
 scanf("%d",&count);
}
}
