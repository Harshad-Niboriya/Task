#include<stdio.h>
int main()
{
	int n,i;
	do
	{
		printf("enter a number");
		scanf("%d",&n);
		if(n%2==0)
		{
			printf("%d is even\n",n);
		}
		else
		{
			printf("%d is odd/n",n);
		}
		printf("please enetr 1 for continue\n");
		scanf("%d",&i);
	}
	while(i==1);
	return 0;
	
}
