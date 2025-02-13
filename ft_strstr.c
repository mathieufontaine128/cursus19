/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 09:19:59 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/12 17:24:14 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return ('\0');
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j] != '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return ('\0');
}
/*#include <stdio.h>
int main()
{
	char strDep[] = "il fait beau aujourdhui et beau demain";
	char strToF1[] = "beau";	//ok
	char strToF2[] = "";		//vide
	char strToF3[] = "z";		//pas de correspondance
	printf("%s", ft_strstr(strDep, strToF1));
	printf("%s", ft_strstr(strDep, strToF2));
	printf("%s", ft_strstr(strDep, strToF3));
}*/
