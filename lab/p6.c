#include<stdio.h>
main(){
	int a,b;
	int eqn;
	printf("Enter value of a\n");
	scanf("%d",&a);
	printf("Enter value of b\n");
	scanf("%d",&b);
	eqn=a*a-2*a*b+b*b;
	printf("The answer is:%d",eqn);
}