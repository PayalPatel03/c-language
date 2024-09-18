#include<stdio.h>
main()
{
int a ,i=1;
printf("Enter number:");
scanf("%d",&a);
do
{
  if (i % 2 == 0)
  {
    printf(" %d ",i);
  }
    i++;
} while (i <= a);
}