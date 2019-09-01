#include<stdio.h>
#include<conio.h>

void main()
{
	char Name[20];
	int PNo[10]; //array of characters for  name and phone number 
	int Age; //For age
	
	//For reading name, age and phone number
	printf("Enter Name: ");
	gets(Name);
	printf("\nEnter Age: ");
	scanf("%d",&Age);
	printf("\nEnter Phone Number: ");
	scanf("%s",&PNo);
	printf("\n");
	
	//For displaying name age and phone number
	printf("\nYou said that your Name is: %s \nYour Age is: %d \nYour Phone Number is: %s", Name, Age, PNo);
}
