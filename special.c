# vini2
#include<stdio.h>
void main()
{
char str[100];
int digits,space,special charact,alphabets,i;
gets(str);
for(i=0;str[i]!=NULL;i++)
{
if(str[i]>='0' && str[i]<='9')
digits++;
else if(str[i]=='')
space++;
else if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
alphabets++;
else
special charact++;
}
printf("\n digits=%d \nspace=%d \nalphabets=%d \nspecialcharacter=%d",digits,space,alphabets,specialcharact);
}
