#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char strg[10]; int n,i,a; //Declaring variables
	
	//Taking input
	printf("Enter a string of not more than 10 characters (including spaces): ");
	gets(strg);
	
	n=strlen(strg); //Taking the length of the string
	a=n/2;
	//Comparing the first and last characters of string, then second and second last and so on
	for(i=0; i<a; i++)
	{
		if (strg[i]!=strg[n-i-1])
		{
			printf("The given string is not a pallindrome.");
			return 0;
		}
	}
	printf("The given string is a pallindrome.");
}
