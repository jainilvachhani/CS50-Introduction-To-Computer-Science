#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d",&n);
    int i,j,k;
    int temp = n-1;
    for(i=1;i<=n;i++)
    {
    	for(j=temp;j>0;j--)
    	{
    		printf(" ");
    	}
    	temp--;
    	for(k=1;k<=i;k++)
    	{
    		printf("#");
    	}
    	printf("  ");
    	for(k=1;k<=i;k++)
    	{
    		printf("#");
    	}
    	for(j=n-1;j>0;j--)
    	{
    		printf(" ");
    	}
    	printf("\n");
    }
    return 0;
}