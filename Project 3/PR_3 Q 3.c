#include<stdio.h>
#include<conio.h>

int main()
{
	int first_digit,last_digit,num,sum;
	
	printf("Enter any number : ");
	scanf("%d",&num);
	
	last_digit = num %10;
	
	first_digit = num;
	
	while(first_digit >= 10){
		
		first_digit = first_digit /10;
	}
	
	sum = first_digit + last_digit;

printf("The sum of the first and the last digit : %d",sum);
	
	return 0;
}
