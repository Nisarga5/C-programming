#include<stdio.h>
int main()
{
int i,n,j,k;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=i;j<=n;j++)
printf(" ");
for(k=1;k<=i;k++)
printf("* ");
printf("\n");
}
}
