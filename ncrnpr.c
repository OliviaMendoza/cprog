#include<stdio.h>

long factorial(int);
long find_ncr(int, int);
long find_npr(int, int);

main()

{
	int n, r;
	int ncr, npr;

	printf("Enter the value of n and r\n");
	scanf("%d%d", &n, &r);
	
	ncr = find_ncr(n, r);
	npr = find_npr(n, r);

	printf("%dC%d = %ld\n", n, r, npr);
	printf("%dP%d = %ld\n", n, r, npr);
	
	return 0;
}

long find_ncr(int n, int r)
{
	long result;
	result = factorial(n)/(factorial(r)*factorial(n-r));
	return result;
}
long find_npr(int n, int r)
{
	long result;
}
long factorial (int n)
{
	int c;
	long result = 1;

	for(c = 1; c <= n ; c++)
	   result = result*c;

	return (result);
}














