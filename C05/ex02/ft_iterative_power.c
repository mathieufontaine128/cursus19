/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 07:40:53 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/19 07:54:03 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	powered;

	i = power;
	powered = nb;
	if (nb == 0 && power == 0)
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
}*/
