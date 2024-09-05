#include<stdio.h>
#define PI 3.14
main(){
	int r;
	float area,perimeter;
	printf("Enter the value of r:\n");
	scanf("%d",&r);
	area=PI*r*r;
	printf("Area of circle is:%f\n",area);
	perimeter=2*PI*r;
	printf("Perimeter of circle is:%f",perimeter);
}