#include<stdio.h>
int main()
{
	int n=123,r,s=0,t=n;
	while(n>0)
	{
		n%10;
		s=s*10+r;
		n=n/10;
	}
	if(t==s)
	{
		printf("%d is palindrome",t);
	}
	else
	{
		printf("%d is not palindrome",t);
	}
	return 0;
}