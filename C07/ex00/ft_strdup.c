/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:56:19 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/18 14:50:23 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void *ft_strdup(char *src)
{
	char *copy;
	size_t len;
	
	copy = NULL;	
	len = ft_strlen(*str) + 1;
	copy = (char *) malloc(len * sizeof(char));
	ft_strcpy(copy, str);
	return (copy);
}
#include <stdio.h>
int main()
{	
	char chaine[] = "une copy";
	printf(ft_strdup(chaine));
}

