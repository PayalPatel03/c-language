#include<stdio.h>
main(){
	
	int num1,num2,sum,diff,product,divide,mod;
	num1 = 12;
	num2 = 6;
	sum = num1 + num2;
	diff = num1 - num2;
	product = num1 * num2;
	divide = num1 / num2;
	mod = num1 % num2;
	printf("Addition of %d and %d is %d\n",num1,num2,sum);
	printf("Subrtaction of %d and %d is %d\n",num1,num2,diff);
	printf("Multiplication of %d and %d is %d\n",num1,num2,product);
	printf("Division of %d and %d is %d\n",num1,num2,divide);
	printf("Modulo of %d and %d is %d\n",num1,num2,mod);
	
}