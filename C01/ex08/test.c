#include <stdio.h>

void	swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void	print_table(int *tab, int size)
{
	int i = 0;
	while (i < size)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
}

void	sort_mok(int *tab, int size)
{
	int i = 0;
	int j;

	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
				swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

void	sort_mok2(int *tab, int size)
{
	// int i = 0, j;
	int *p;
	int *h;

	//p = &tab[size];
	h = tab;
	while (tab != &h[size])
	{
		p = tab + 1;
		// j = i + 1;
		while (p != &h[size])
		{
			if (*(tab) > *(p))
				swap(tab, p);
			p++;
			// j++;
		}
		tab++;
		// i++;
	}
}

void	sort_mok3(int *tab, int size)
{
	int *p = tab + size;

	while (size)
	{
		while (tab != p)
		{
			if (*(tab) > *(tab + 1))
				swap(tab, tab + 1);
			tab++;
		}
		tab -= size + 1;
		size--;
	}
}

int	main(void)
{
	int tab[] = {9, 55, 7, 20, 6, 4, 81, 7, 1, 0};
	// int *p = &tab[0];
	print_table(tab, 10);
	printf("\n ================ \n");
	sort_mok3(tab, 10);
	print_table(tab, 10);

	// while(* != '\0')
	// {
	// printf("%d",*(p++));
	// printf("\n%d",*(p));
	// }
}
