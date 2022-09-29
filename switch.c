#include<stdio.h>
int main()
{
	int ch;
	printf("enter a number");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("add\n");
		case 2:
			printf("substract\n);
			break;
		case 3:
			printf("multipication\n");
		case 4:
			printf("division\n");
			break;
		deafault:
			printf("Invalid choice");
	}
}