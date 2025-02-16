/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:53:07 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/08 11:18:41 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putstr(char *str)
{
	int	lon;

	lon = 0;
	while (str[lon])
		lon++;
	write (1, str, lon);
}
int main()
{
	ft_putstr("hello 42");
}
