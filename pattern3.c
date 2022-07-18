/******** C program to print the below pattern

  5
  4 4
  3 3 3 
  2 2 2 2
  1 1 1 1 1

 ***************/

#include<stdio.h>

int main()
{
	int i,j,num;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=num;i>=1;i--)
	{
		for(j=num;j>=i;j--)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}

