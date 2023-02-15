#include<stdio.h>
void main()
{
int num1,num2;
float result=0;
char ch;
printf("Enter two numbers:");
scanf("%d %d",&num1,&num2);
printf("choose the operand to perform('+','-','*','/','%'):");
scanf(" %c", &ch);
switch(ch)
{
case '+':result=num1+num2;
      break;
case '-':result=num1-num2;
      break;
case '*':result=num1*num2;
      break;
case '/':result=num1/num2;
      break;
case '%':result=num1%num2;
      break;
default:printf("invalid operand");
}
printf("result:%d %c %d=%f\n",num1,ch,num2,result);
}
