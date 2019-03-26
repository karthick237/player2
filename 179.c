#include <stdio.h>
int main()
{
int a,b,c,rem,s=0,l=0;
scanf("%d %d",&a,&b);
c=a^b;
while(c>0)
{
 rem=c%2;
 if(rem==1)
 l++;
 c=c/2;
}
printf("%d",l); 
return 0;
}
