
Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.



void sort_int_tab(int *tab, unsigned int size)
{
	int j = 0;
	int i = 0;
	int temp = 0;

	while(i < size -1)
	{
		j = i;
		while(j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	while(i < size -1)
	{
		j = i;
		while(j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	while(i < size -1)
	
}



void	sort_int_tab(int *tab, unsigned int size)
{
	int tmp;
	unsigned int i;
	unsigned int j;

	i = 0;
	while (i < size - 1)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
