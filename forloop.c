#include<stdio.h>
int main()
{
	int i,n;
	printf("enter a number");
	scanf("%d",&n);
	for(i=5;i<=50;i+5)
	{
		printf("%d\n",i*n);
	}

	return 0;
}