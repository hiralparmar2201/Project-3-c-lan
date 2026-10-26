#include<stdio.h>
#include<conio.h>

int main()
{
	char cha='a';
	
	do{
		printf("%c\n",cha);
		cha = cha + 4;
	}
	while(cha <= 'z');
	
return 0;
}

