/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 09:19:59 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/13 16:58:07 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while(str[i+j] != '\0' && str[i] == to_find[j])
		j++; 
		return (&str[i]);
		i++;
	}
	return ('\0');
}
#include <stdio.h>
#include <string.h>
int main()
{
	//char str1[] = "";
	char str2[] = "cdef";
	char str3[] = "cd";
	printf("%s", strstr(str2, str3));
	printf("\n");
	printf("%s", ft_strstr(str2, str3));
}
