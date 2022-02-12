/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */
#include<stdio.h>
int main(void)
//start main function
{
	int num1,num2,tot;
	float avg;
	
	printf("Enetr marks of Subject 1 :");
	scanf("%d",&num1);
	
	printf("Enetr marks of Subject 2 :");
	scanf("%d",&num2);
	
	tot=num1+num2;
	
	avg=tot/2;
	
	printf("\nAvarage of marks %.1f",avg);
	
}//end main function1