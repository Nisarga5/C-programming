#include<stdio.h>
void main()
{
int x=10,y=0;
printf("Enter x=%d\n",x);
printf("Enter y=%d\n",y);
y=x++;
printf("Post increment x=%d\n",x);
printf("Post increment y=%d\n",y);
return;
}
