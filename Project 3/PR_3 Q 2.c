#include<stdio.h>
#include<conio.h>

int main()
{
	int num,sum=0;
	
	printf("Enter any number : ");
	scanf("%d",&num);
	
	while(num!=0){
		num = num/10;
		sum++;
	}
	printf("%d",sum);

	
	return 0;
}
