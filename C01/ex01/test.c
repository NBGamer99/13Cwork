void mok(int ****nb)
{
	****nb = 42;
}

#include <stdio.h>

int main()
{
	int a = 100;
	int *p;
	int **p1;
	int ***p2;
	int ****p3;

	p = &a;
	p1 = &p;
	p2 = &p1;
	p3 = &p2;
	printf("before = %d", a);
	mok(p3);
	printf("\nafter = %d", a);
}
