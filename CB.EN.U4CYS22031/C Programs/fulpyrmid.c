#include <stdio.h>
void main()
{
	int n;
	printf("enter number of rows in pattern");
	scanf("%d",&n);
	for (int i=0; i<n; i++)
	{
		for (int j=n-i-1; j>0; j--)
		{
			printf("  ");
		}
		for (int j=0 ; j<2*i+1; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
}
