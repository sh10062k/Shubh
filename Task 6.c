#include<stdio.h>
#include<conio.h>

void main()
{
	int a,x,b,s=0; //Declaring variables
	
	//Taking input
	printf("Write a number to check if it's an armstrong number or not: ");
	scanf("%d",&a);
	
	b=a; //Assigning to a seperate variable
	while(a>0)
	{
		x=a%10; //Taking the last digit and storing in x
		s=s+(x*x*x); //Computing the cube of latest seperated digit and adding it to the previous cube
		a=(a/10); //Updating the original number to the remaining part of that number after last digit is removed
	}
	
	//Comparing the final sum with original number and printing the output
	if(s==b)
		printf("The number is an armstrong number.");
	else
		printf("The number is not an armstrong number.");
	
}
