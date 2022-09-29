#include<stdio.h>
int main()
{
	int a[5]={11,22,33,44,55},i;
	for(i=0;i<sizeof(a)/sizeof(int);i++)
	{
		printf("%d\n",a[i]);
	}
	printf("%d",sizeof(a)/sizeof(int));
	return 0;
}