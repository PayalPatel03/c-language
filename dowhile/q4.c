#include<stdio.h>
main()
{
  int n1=0,n2=1,i,number;
  printf("Enter  a number:");
  scanf("%d",&number);
  printf("%d %d",n1,n2);

  for(i=2 ; i<number ; i++)
  {
    int n3=n1+n2;
    printf(" %d",n3);
    n1=n2;
    n2=n3;
  }

}