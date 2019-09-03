#include<stdio.h>
#include<conio.h>

void main()
{
	float f,c; int ch; //Declaring variable names
	
	//Providing the options
	printf("\t\tFahrenheit-Celsius Converter\n\n");
	printf("\t1. Celsius to Fahrenheit\n\t2. Fahrenheit to Celsius\n\t3. Exit");
	printf("\n\nEnter your choice: ");
	scanf("%d",&ch);
	
	switch(ch) //Applying Switch
	{
		case 1: printf("Enter temperature in celsius: "); //Taking input
				scanf("%f",&c);
				f=((9.0/5.0)*c)+32.0; //Calculation
				printf("\nThe converted temperature is %f",f); //Printing output
				break; //So that it gets out of switch once the work is done
		case 2: printf("Enter temperature in fahrenheit: ");
				scanf("%f",&f);
				c=(5.0*(f-32.0))/9.0;
				printf("\nThe converted temperature is %f",c);
				break;
		case 3: return 0;
		default:printf("\nPlease enter a valid choice.");	
	}
}
