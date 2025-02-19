/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 07:48:15 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/19 08:59:57 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power <  0)
		return(0);
	if (nb == 0 && power == 0)
		return(1);
	return(nb * ft_recursive_power(nb, power - 1));
}
#include <stdio.h>
int main()
{
	printf("%d\n",ft_recursive_power(23, 2));
}
