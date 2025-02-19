/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 07:21:02 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/19 07:34:45 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i > 1)
	{
		nb *= i - 1;
		i--;
	}
	return (nb);
}
/*#include <stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_factorial(0));
}*/
