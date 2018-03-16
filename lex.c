#include<stdio.h>
#include<string.h>
int main()
{
int i,j;
char str[20][30],temp[10];
printf("enter 4 values");
for(i=0;i<20;i++)
scanf("%s[\n]",str[i]);
for(i=0;i<19;++i)
 for(j=i+1;j<20;++j)
 {
  if(strrev(str[i],str[j]>0))
  {
   strcpy(temp,str[i]);
   strcpy(str[i],str[j]);
   strcpy(str[j],temp);
   }
 }
 printf("\n lexicalgraphical order:\n");
 for(i=0;i<20;++i)
 {
 put(str[i]);
 }
return 0;
}
   

