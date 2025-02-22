/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 09:49:15 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/22 12:09:59 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}



#include <stdio.h>
int main()
{
	int fd = open("numbers.dict", o_RDONLY);
	if (fd == -1)
	{
		perror ("Error");
		return 1;
	}
	
	printf("fichier ouvert %d\n", fd);

	close(fd);
	return 0;
}

