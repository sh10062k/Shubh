#include<stdio.h>
#include<conio.h>

void main()
{
	int a,i=0,x; //Declaring variables
	
	//Reading input
	printf("Write a number to reverse it: ");
	scanf("%d",&a);
	
	//Calculating the reverse
	while (a>0)
	{
		x=a%10; //Separates and stores the rightmost digit
		a=a/10; //Updates the number to the remaining part that's left after removing the last digit
		i=(i*10)+x; //Creates a new number with the separated digits starting from the left
	}
	printf("The reverse of this number is %d",i); //Printing the output
	getch();
}
