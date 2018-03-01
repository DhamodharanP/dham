#include<stdio.h>
int main()
{
int N,L,R,i,count=0;
scanf("%d",&N);
scanf("%d\t%d",&L&R);
for(i=N;i<=R;i++)
if(i==N)
{
count++;
}
if(count<0)
{
printf("yes");
}
else
{
printf("No");
}
}
