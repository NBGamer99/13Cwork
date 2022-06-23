#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void	putdis(char c)
{
	write(1, &c, 1);
}

void	test(int n)
{
	if (n == -2147483648)
		write(1, "-2147483648",11);
	else if ( n < 0)
	{
		putdis('-');
		test(-n);
	}
	else if (n >= 0 && n <= 9)
		putdis('0' + n);
	else
	{
		test(n / 10);
		test(n % 10);
	}
}

int main()
{
	test(INT_MIN);
	// printf("%d",INT_MIN);
}
