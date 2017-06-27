# vini2
#include<stdio.h>
void main()
{
int rem,rev=0,num;
scanf("%d",num);
while(num>0)
{
rem=num%10;
rev=(rev*10)+rem;
num=num/10;
}
printf("reversed number is:%d",rev);
}
