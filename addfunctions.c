#include<stdio.h>
long addition (long, long);

main()
{
	long first, second, sum;

	scanf("%ld%ld", &first, &second);
	sum = addition (first, second);
	printf("%ld\n", sum);
	
	return 0;
}
long addition (long a, long b)
{
	long result;

	result = a + b;

	return result;
}
