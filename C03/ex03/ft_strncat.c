/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 07:26:19 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/12 17:18:07 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	lon;
	unsigned int	j;

	lon = 0;
	j = 0;
	while (dest[lon] != '\0')
		lon++;
	while (src[j] != '\0' && j < nb)
	{
		dest[lon] = src[j];
		lon++;
		j++;
	}
	dest[lon] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main()

{
	char str1[100] = "le monde appartient a ceux qui";
	char str2[30] = " se levent tot";
	printf("on obtient en ajoutant str2 a str1 avec nb = 3 : %s\n",
	ft_strncat(str1, str2, 3));
	printf("on obtient en ajoutant str2 a str1 avec nb = 10 : %s\n",
	ft_strncat(str1, str2, 14));
	printf("on obtient en ajoutant str2 a str1 avec nb = 10 : %s\n",
	ft_strncat(str1, str2, 14));	
}*/
