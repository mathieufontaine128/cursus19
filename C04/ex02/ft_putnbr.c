/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:23:22 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/13 08:58:19 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1,"-2147683648",11);
		return;
	}
	else if(nb < 0)
	{	
		ft_putchar('-');
		nb *= -1;
	}
	else if(nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
int main(/*int argc, char  **argv*/)
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(501);
	ft_putchar('\n');
	ft_putnbr(33);
	ft_putchar('\n');
	ft_putnbr(42);
}



