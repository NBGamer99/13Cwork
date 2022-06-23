#include <stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void rev_mok(int *tab, int size)
{
	int i = 0;

	while (i < (size / 2))
	{
		swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}

void	print_table(int *tab, int size)
{
	int i = 0;
	while (i < size)
	{
		printf("tab[%d] = %d\n", i ,tab[i]);
		i++;
	}
}

void rev_mok2(int *tab, int size)
{
	int i = 0;
	int j = size - 1;
	int tmp;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}

int main()
{
	int tab[] = {1,2,3,4,5,6,7,8,9};
	print_table(tab,9);
	printf("\n ================== \n");
	rev_mok2(tab, 9);
	print_table(tab,9);
}
