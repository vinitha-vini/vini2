# vini2
#include<stdio.h>
void main()
{
int temp,n,reverse=0;
printf("enter an integer:");
scanf("%d",n);
temp=n;
while(temp!=0)
{
reverse=reverse*10;
reverse=reverse+temp%10;
temp=temp/10;
}
if(temp==n)
printf("given no is palindrome");
else
printf("not a palindrome");
}
