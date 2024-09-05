#include<stdio.h>
main(){
	int p,r,n;
	float si;
	printf("Enter value of principal amount:\n");
	scanf("%d",&p);
	printf("Enter value of rate:\n");
	scanf("%d",&r);
	printf("Enter value of time:\n");
	scanf("%d",&n);
	si=p*r*n/100;
	printf("The simple interest is:%f",si);
}