#include<stdio.h>
#include<conio.h>

void main()
{
	int A[10],i,large,small; //Declaring variables
	
	//For entering values in array
	printf("Enter the elements of array:-\n");
	for(i=0; i<10; i++)
	{
		printf("Enter %d element: ",i+1);
		scanf("%d",&A[i]);
	}
	
	//For finding the greatest number
	large=A[0];
	for(i=1; i<10; i++)
	{
		if (A[i]>large)
			large=A[i];
	}
	//For printing the greatest number
	printf("\nThe greatest number in the given array is %d", large);
	
	//For finding the smallest number
	small=A[0];
	for(i=1; i<10; i++)
	{
		if (A[i]<small)
			small=A[i];
	}
	//For printing the smallest number
	printf("\nThe smallest number in the given array is %d", small);
}
