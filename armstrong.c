# vini2
#include<stdio.h>
void main()
{
int n,sum=0;rem;
int temp=num;
printf("enter a number:")
scanf("%d",&n);
while(n!=0)
{
rem=rem%10;
sum=sum+(rem*rem*rem);
n=n/10;
}
if(temp==num)
printf("armstrong no");
else
printf("not an amstrong no");
}
