/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:14:36 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/16 16:08:20 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int n;
	int sign;

	sign = 1;
	while(*str == '\t' || *str == '\n' || *str == '\v' 
		|| *str == '\f' || *str == '\r' || *str == ' '
		|| (*str >= 'A' && *str >= 'Z') 
		|| (*str >= 'a' && *str <= 'a'))
		str++;
	while(*str == '-'|| *str == '+')
	{
		if(*str == '-')
			sign *= -1;
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');		
		str++;
	}
	return(n * sign);
}
#include <stdio.h>
int main()
{
	printf("%d\n",ft_atoi("   			++-+-+-----ahaaj12dd12d:xi"));
}
