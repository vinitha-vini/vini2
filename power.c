# vini2
#include(stdio.h>
void main()
{
int a,b,result=1;
printf("enter an base");
scanf("%d",a);
printf("enter an exponent");
scanf("%d",b);
while(b!=0)
{
result*=a;
b--;
}
printf("result is:%d",result);
}
