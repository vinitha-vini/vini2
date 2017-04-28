# vini2
#include(stdio.h>
void main()
{
int rem,num,sum=0;
int max,min;
printf("enter a minimum limit:");
scanf("%d",&min);
printf("enter a maximum limit:");
scanf("%d",&max);
printf("Armstrong no within the limits are:");
for(num=min;num<=max;num++)
{
int temp=num;
while(num!=0)
{
rem=num%10;
sum=sum+(rem*rem*rem);
num=num/10;
}
if(sum==temp)
{
printf("%d",sum);
}
}
