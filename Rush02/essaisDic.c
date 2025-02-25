/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   essaisDic.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:39:26 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/23 11:26:27 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

int ft_is_num(char c)
{
	return ((c >= '0' && c <= '9'));
}
int ft_is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

void	lire_et_montrer(const char *fichier)
{
	int fd = open(fichier, O_RDONLY);
	if (fd == -1)
	{
		perror("erreur");
		return;
	}

	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;
	int i;

	i = 0;
	while	((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{	
		while(i < bytes_read)
		{
			if (ft_is_alpha(buffer[i]))
				write(1, &buffer[i], 1);
			if ((!ft_is_alpha(buffer[i])) && (ft_is_alpha(buffer[i - 1])))
				write(1, "\n", 1);
			i++;
			//if (ft_is_num(buffer[i]))
			//	write(1, &buffer[i],1);
			//i++;
		}
	}

	if (bytes_read == -1)
	{
		perror("Erreur");
	}
	close(fd);
}
 int main()
{
	lire_et_montrer("numbers.dict");
}
