#include<stdio.h>
main()
{
	int number, sum = 0, temp, remainder;

	printf("Enter a number\n");
	scanf("%d", &number);

	temp = number;

	while(temp != 0 )
	{
		remainder = temp%10;
		sum = sum + remainder*remainder*remainder;
		temp = temp/10;
	}
	if ( number == sum )
		printf("Entered number is an armstrong number.");
	else
		printf("Entered number is not an armstrong number.");
	return 0;
}
