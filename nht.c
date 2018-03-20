#include<stdio.h>
#include<math.h>
int main()
{
int L,B,H;
int surfacearea,volume;
printf("enter the L B H of the cuboid");
scanf("%f%f%f",&L,&B,&H);
surfacearea=2*(L*B+B*H+H*L);
volume=L*B*H;
printf("surface area of cuboids:%.3f",surfacearea);
printf("\n volume of cuboids:%.3f",volume);
return 0;
}
