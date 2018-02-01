#include<stdio.h>
void main()
{
char s[300];
int count=0,i;
printf("enter the string");
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
count++;
printf("%d",&count);
}
}
