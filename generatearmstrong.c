#include<stdio.h>
main()
{
	int r;
	long number = 0, c, sum = 0, temp;

	printf("Enterthe maximum range upto which to find armstrong numbers\n");
	scanf("%ld", &number);

	printf("Following armstrong numbers found from 1 to %d\n", number);

	for ( c = 1 ; c <= number ; c++ )
	{
		temp = c;
		while( temp != 0 )
		{
			r = temp%10;
			sum = sum + r*r*r;
			temp = temp/10;
		}
		if ( c == sum )
		  printf("%ld\n", c);
		     sum = 0;
	}
	getch();
	return 0;
}
