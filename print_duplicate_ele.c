/**********************Program to Find the dupliacate elements in the array********************/

#include<stdio.h>

void find_duplicate_ele(int *arr,int size);

int main()
{
	int arr[50],i,size;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",(arr+i));
	}
	find_duplicate_ele(arr,size);
	return 0;
}

void find_duplicate_ele(int *arr,int size)
{
	int i,j;
	printf("The duplicate elements in the array are:\n");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if((arr[i] ^ arr[j]) == 0)
			{
				printf("%d ",arr[j]);
			}
		}
	} 
	printf("\n");
}
