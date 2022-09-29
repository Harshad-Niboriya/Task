#include<stdio.h>
int main()
{
	int s,a[s],i;
	printf("enter size of array\n");
	scanf("%d",&s);
	printf("enter %d elements\n",s);
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elements are-\n");
	for(i=0;i<s;i++)
	{
		printf("%d\n",a[i]);
	}

	return 0;
}