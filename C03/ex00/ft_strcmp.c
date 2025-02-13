/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:47:48 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/13 14:46:23 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
#include<string.h>
int main()
{
	char str1[] = "";
	char str2[] = "a";
	char str3[] = "b";	
	printf("%d\n", strcmp(str1, str2));
	printf("%d\n", strcmp(str2, str1));
	printf("%d\n", strcmp(str2,str2));
	printf("%d\n", strcmp(str3, str2));
	printf("%d\n", strcmp(str2,str3));
	printf("%d\n", strcmp(str1,str1));	
	printf("\n");
	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", ft_strcmp(str2, str1));
	printf("%d\n", ft_strcmp(str2,str2));
	printf("%d\n", ft_strcmp(str3,str2));
	printf("%d\n", ft_strcmp(str2,str3));
	printf("%d\n", ft_strcmp(str1, str1));
			
}*/
