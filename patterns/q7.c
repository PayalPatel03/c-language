//A
//B A
//C B A
//D C B A
//E D C B A

#include<stdio.h>
main(){
	char ch='A';
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf(" %c ",'A'+i-j);
		}
		printf("\n");
	}
	
}