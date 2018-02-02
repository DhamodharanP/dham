#include<stdio.h>
int fib(int N)
{
if(n<=1)
return N;
return fib(n-1)+fib(n-2);
}
int main()
{
int N=5;
printf("%d",fib(N));
getchar();
return 0;
}


