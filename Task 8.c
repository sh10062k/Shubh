#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i; //Declaring variables
	
	//Taking input number
	printf("Enter a number to print its table: ");
	scanf("%d",&n);
	
	//Printing the table
	printf("\nThe table of %d is:-",n);
	for(i=1; i<=10; i++)
	{
		printf("\n\t%d x %d = %d",n,i,n*i);
	}
}
