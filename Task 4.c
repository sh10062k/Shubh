#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char f[50],l[50]; //Declaring variables
	
	//Reading first name
	printf("Write your first name and put a space: "); //Concatination will take place without a separation of the strings
	gets(f);
	
	//Reading last name
	printf("Write your last name: ");
	gets(l);
	
	strcat(f,l); //Concatinating both strings
	printf("Your full name is "); puts(f); //Printing the output
	getch();
}
