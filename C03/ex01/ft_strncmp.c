/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:51:55 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/13 15:50:20 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <string.h>
#include <stdio.h>
int main ()
{
	//char str1[] = "";
	char str2[] = "abc";
	char str3[] = "abd";
	printf("%d\n", strncmp(str2, str3, 3));
        printf("%d\n",ft_strncmp(str2, str3, 3));
}*/
