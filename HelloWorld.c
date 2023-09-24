//C calculator

#include <stdio.h>
int main(){
  char operator;
  double num1;
  double num2;
  double result;
  printf("enter operator(+-*/)");
  scanf("%c",&operator);
  printf("number1:");
  scanf("%lf",&num1);
  printf("number2:");
  scanf("%lf",&num2);
switch(operator){
case '+':
result=num1+num2;
printf("%lf",result);
break;
case '-':
result=num1-num2;
printf("%lf",result);
break;
case '*':
result=num1*num2;
printf("%lf",result);
break;
case '/':
result=num1/num2;
printf("%lf",result);
break;
default:("%c invalid operator",&operator);
    break;
  }
}