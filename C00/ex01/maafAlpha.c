/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:55:04 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/05 18:41:06 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;
	char	d;

	c = 'a';
	d = 'B';
	while (c <= 'z')
	{
		write(1, &c, 1);
		write(1, &d, 1);
		c += 2;
		d += 2;
	}
}
int main()
{
	ft_print_alphabet();
	write(1, "\n", 1);
}
