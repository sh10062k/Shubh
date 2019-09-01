#include<stdio.h>
#include<conio.h>

void main()
{
	float c,f; //Declaring variables
	
	//Taking input in celsius
	printf("Write the temperature in celsius: ");
	scanf("%f",&c); 
	
	f=((9.0/5.0)*c)+32.0; //Converting into Farenheight
	
	printf("The converted value of celsius in fahrenheit is %f",f); //Displaying output
}
