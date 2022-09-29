#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a number");
    scanf("%d",&n);
    for (i=n;i<= 10*n;i=i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
