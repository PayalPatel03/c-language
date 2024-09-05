#include<stdio.h>
main(){
	int a,b,eqn;
	printf("Enter value of a\n");
	scanf("%d",&a);
	printf("Enter value of b\n");
	scanf("%d",&b);
	eqn=a*a*a+b*b*b+3*a*a*b+3*a*b*b;
	printf("The answer of this equation is:%d",eqn);
	
}