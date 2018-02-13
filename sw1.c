#include<sdtdio.h>
int main()
{
double 1num=37,2num=73,temp;
printf("enter the 1num");
scanf("%d".&1num);
printf("enter the 2num");
scanf("%d",&2num);
temp=1num;
1num=2num;
2num=temp;
printf("\n after swapping=%32\n",1num);
printf("after swapping=-%32",2num);
}
