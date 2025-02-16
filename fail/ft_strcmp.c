/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:47:48 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/15 08:00:44 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
#include <stdio.h>
#include<string.h>
int main()
{
	char str1[] = "au";
	char str2[] = "aU";
	char str3[] = "au";
	char str4[] = "au";
	char str5[] = "aU";
	char str6[] = "au";
	char str7[] = "è";
	char str8[] = "e";
	printf("%d\n", strcmp(str1, str2));
	printf("%d\n", strcmp(str3, str4));
	printf("%d\n", strcmp(str5, str6));
	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", ft_strcmp(str3, str4));
	printf("%d\n", ft_strcmp(str5, str6));
	printf("%d\n", ft_strcmp(str7, str8));

