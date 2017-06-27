# vini2
#include<stdio.h>
void main()
{
int a,b,t,x,y;
printf("enter two integers");
scanf("%d %d",&x,&y);
while(b!=0)
{
t=b;
b=a%b;
a=t;
}
printf("highest common factor is:%d",a);
}
