/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_powerV2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 06:47:45 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/20 08:36:13 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	poweredi;

	i = power;
	powered = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i > 1)
	{
		powered *= nb;
		i--;
	}
	return (powered);
}
/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(-1, 0));
	printf("%d\n", ft_iterative_power(1, 0));
	printf("%d\n", ft_iterative_power(-1, -1));
	printf("%d\n", ft_iterative_power(1,-1));
	printf("%d\n", ft_iterative_power(-1, 1));
	printf("%d\n", ft_iterative_power(-1, 2));
	printf("%d\n", ft_iterative_power(2,10));
	printf("%d\n", ft_iterative_power(5, 3));

}*/
