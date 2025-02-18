/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:14:36 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/17 09:07:38 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while ((str[i] >= '\a' && str[i] <= '\r') || str[i] == ' ')
		str++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		str++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		str++;
	}
	return (n * sign);
}
/*#include <stdio.h>
int main()
{
	printf("%d\n",ft_atoi("   			++-+-+-------1212dd12d:xi"));
}*/
