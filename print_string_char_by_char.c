/**************************Wiite a program to print a string character by character****************************/

#include<stdio.h>

int main()
{
	char str[100];
	printf("Enter the string:\n");
	scanf("%[^\n]%*c",str);
	int i=0;
	while(str[i] != '\0')
	{
		printf("%c ",str[i]);
		i++;
	}
	printf("\n");
	return 0;
}
