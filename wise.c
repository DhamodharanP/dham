#include<stdio.h>
int main()
{
int i=150;
int k=160;
printf("after swapping to %d%d",k,i);
i=i^k;
k=i^k;
printf("before swapping\n %d%d",k,i);
}
