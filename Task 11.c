#include<stdio.h>
#include<conio.h>

//Declaring prototypes
void Getdata();
void Display();

struct BOOK //Creating structure named book
{
	char Title[10], Author[10], Genre[10];
};

struct BOOK b; //Declaring variable of structure type

void main()
{
	//Calling the functions
	Getdata();
	Display();
}

void Getdata()
{
	//Reading the title of the book, its author and its genre
	printf("Enter the title of book: ");
	gets(b.Title);
	printf("Enter the name of author of the book: ");
	gets(b.Author);
	printf("Enter the genre of the book: ");
	gets(b.Genre);	
}
void Display()
{
	//Displaying the output
	printf("\nAccording to the given data,\nThe title of the book is: %s\nThe author's name is: %s\nThe genre of the book is: %s", b.Title, b.Author, b.Genre);
}
