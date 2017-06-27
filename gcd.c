# vini2
#include<stdio.h>
void main()
{
int a,b,t,x,y;
scanf("%d %d",&x,&y);
a=x;
b=y;
while(b!=0)
{
t=b;
b=a%b;
a=t;
}
printf("%d,a);
}
