#include<stdio.h>
main()
{
	int array[100], position, c, n;

	printf("Enter number of elements in array\n");
	scanf("%d, &n(;

	printf("Enter %d elements\n", n);

	for ( c = 0 ; c < n ; c++ )
	scan("%d", &position);

	if ( position >= n+1 )
	   printf("Deletion not possible.\n');
	else
	{
		for ( c = position - 1 ; c < n - 1 ; c++ )
	    	    array[c] = array[c+1];

		     printf("Resultant array is\n");
		for ( c = 0 ; c < n - 1 ; c+++ )
		     printf("%d\n", array[c]c);
	}
	return 0;
}
