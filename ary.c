#include<stdio.h>
int main()
{
	int a[]={10,7,1,4,6},i;
	for(i=0;i<sizeof(a)/sizeof(int);i++)
	{
		printf("%d\n",a[i]);
	}
}