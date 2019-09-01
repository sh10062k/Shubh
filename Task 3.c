#include<stdio.h>
#include<conio.h>

void main()
{
	int p,c,b,sum; float avg; //Declaring variables
	
	//Reading marks in 3 subjects
	printf("Write marks in physics, chemistry and biology: ");
	scanf("%d%d%d",&p,&c,&b);
	
	sum=p+c+b; //Claculating sum
	printf("\nThe sum of these marks is: %d",sum); //Printing sum
	
	avg=sum/3.0; //Calculating average
	printf("\nThe average of these marks is: %f",avg); //Printing average
	
	getch();
}

