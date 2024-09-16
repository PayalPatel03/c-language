#include<stdio.h>
main(){
	int m1,m2,m3;
	float avg;
	printf("Enter marks of subject 1:");
	scanf("%d",&m1);
	printf("Enter marks of subject 2:");
	scanf("%d",&m2);
	printf("Enter marks of subject 3:");
	scanf("%d",&m3);
	avg=(m1+m2+m3)/3;
	printf("average is %.2f",avg);
	if(avg>90){
		printf("You have secured A grade");
	}
	else if((avg>80)&&(avg<90)){
		printf("You have secured B grade");	
	}
	else if((avg>70)&&(avg<80)){
		printf("You have secured C grade");
	}
	else if((avg>60)&&(avg<70)){
		printf("You have secured D grade");
	}
	else{
		printf("Sorry!! you have failed the eximanation");
	}
}