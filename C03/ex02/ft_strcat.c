/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 18:29:47 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/12 16:53:49 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*#include <string.h>
#include <stdio.h>
int main ()
{
	char str1[100] = "le monde appartient a ceux qui";
	char str2[] = " se levent tot";
	printf("on obtient en ajoutant str2 a str1 : %s",ft_strcat(str1, str2));
	printf("on obtient en ajoutant str2 a str1 : %s",strcat(str1, str2));	
}*/
