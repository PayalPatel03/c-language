#include<stdio.h>
main(){
	int a;
	printf("Enetr value of a:");
	scanf("%d",&a);
	if(a>0){
		printf("%d is a positive number",a);
	}
	else if(a<0){
		printf("%d is a negative number",a);
	}
	else{
		printf("It is a neutral number");
	}
}