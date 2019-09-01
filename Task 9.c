#include<stdio.h>
#include<conio.h>

void main()
{
	int fact=1,n,i; //Declaring variables
	
	//Taking input number
	printf("Enter a number to calculate its factorial: ");
	scanf("%d",&n);
	
	//Calculating factorial
	for(i=n; i>1; i--)
	{
		fact=fact*i;
	}
	printf("\nThe factorial of %d is %d",n,fact); //Printing factorial
}
