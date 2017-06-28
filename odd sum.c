# vini2
#include<stdio.h>
void main()
{
int n,i,sum=0,odsum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i<=15)
{
sum=sum+i;
}
else if(i>15 && i<=45)
{
odsum=odsum+i;
}
}
printf("%d %d",sum,odsum);
}
