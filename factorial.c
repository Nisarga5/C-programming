#include<stdio.h>
void main()
{
int a,b=1,result=a*b;
printf("enter the number:");
scanf("%d",&a);
while(b<=10)
{
result=a*b;
printf("%d x %d = %d\n",a,b,result);
b++;
}}
