void	ft_sort_in_tab(int *tab, int size)
{
	int i;
	int temp;
	int swapped;

	swapped = 1;
	while (swapped)
	{	
		swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
	       			tab[i]	= tab[i + 1];
				tab[i + 1] = temp;
				swapped = 1;
			}
			i++;
		}
	}

}
#include <stdio.h>
void ft_print_tab(int *tab, int size)
{
    int i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");
}

// Programme principal
int main()
{
    int tab[5] = {3, 5, 2, 1, 4};

    printf("Avant tri : ");
    ft_print_tab(tab, 5);

    ft_sort_in_tab(tab, 5);  // Trie le tableau

    printf("Après tri : ");
    ft_print_tab(tab, 5);

    return 0;
}
