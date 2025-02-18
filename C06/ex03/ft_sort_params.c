/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:17:26 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/18 12:46:23 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++ ;
	}

int	ft_strcmp(char **s1, char **s2)
{
	while(**s1 && (**s1 == **s2))
	{
		s1++;
		s2++;
	}
	return (**s1 - **s2);
}
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if ((ft_strcmp(argv[i][j], argv[i + 1][j])) == 0)
				j++;       
			if ((ft_strcmp(argv[i][j], argv[i + 1][j])) >= 0)
				ft_swap(argv[i], argv[i + 1]);
		}
		j = 0;
		while (argv[i][j] ! =' \0')
			ft_pustr(argv[i][j]);
	}
}

