#include<stdio.h>
int main()
{
	int i;
	char c;
	int j;
	printf("enter a number\n");
	scanf("%d",&i);
	fflush(stdin);
	printf("enter a number\n");
	scanf("%c",&c);
	printf("enter a number");
	scanf("%d",&j);
	printf("i=%d c=%c j=%d",i,c,j);
	return 0;
}