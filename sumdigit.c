#include<stdio.h>
int main()
{
	int n=123,r,s=0;
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("sum of digits is %d",s);
	return0;
}