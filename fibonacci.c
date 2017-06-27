# vini2
#include<stdio.h>
void main()
{
int a,b,c,i,n;
a=0;
b=1;
c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%d",c);
a=b;
b=c;
c=a+b;
}
}
