#include<stdio.h>
main(){
	int a,b;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	if(a<b){
		printf("%d is minimum number",a);
	}
	else{
		printf("%d is minimum number",b);
	}
}