# vini2
#include<stdio.h>
void main()
{
int n,c=2;
printf("enter a no:");
scanf("%d",&n);
for(c=2;c<=n-1;c++)
{
if(n%2==0)
{
printf("not a prime number");
break;
}
}
if(c==n)
{
printf("It is a prime number");
}
}
