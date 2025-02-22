/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:14:36 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/22 13:39:09 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while ((str[i] >= '\a' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * sign);
}
int main(int argc, char **argv)
{
	while (argc > 1 &&  argc < 3)
	{
		if (argc == 3)
			printf("%d\n", ft_atoi(argv[3]));
			write(1, "\n", 1);
		if (argc == 2)
			printf("%d\n", ft_atoi(argv[2]));
			write(1, "\n", 1);
	}
	return (0);

	//printf("%d\n",ft_atoi("   			++-+-+--------121i2dd12d:xi"));
}
