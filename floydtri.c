#include<stdio.h>
int main()
{
	int n, i, c, a = 1;

	printf("Enter the number of rows of Floyd's Triangle to print\n");
	scanf("%d", &n);
	
	for ( i = 1 ; i <= n ; i++ )
	{
		for ( c = 1 ; c <= i ; c++ )
		{
			printf("%d_",a);
			a++;
		}
	}
	return 0;
}
