#include "ft_abs.h"
#include <stdio.h>
int main()
{
	printf("%d\n",ABS(0));
	printf("%d\n",ABS(-25));
	printf("%d\n",ABS(1234567));
	printf("%d\n",ABS(-1234567));
	printf("%d\n",ABS(2147483647));
	printf("%d\n",ABS((int)-2147483648));
	//TEST(ABS(2147483647), 2147483647);
	// im not sure about this one actually... use your head
	// TEST(ABS((int)-2147483648), 0);
}
