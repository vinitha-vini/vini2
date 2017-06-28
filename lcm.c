# vini2
#include<stdio.h>
void main()
{
int lcm,max,i,a,b;
scanf("%d %d",a,b);
max=(a>b)?a:b;
max=i;
while(1)
{
if(i%a==0 && i%b==0)
{
lcm=i;
break;
}
i+=max;
}
printf("least common multiple is:%d",lcm);
}
