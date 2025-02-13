/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:51:55 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/12 14:49:02 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>
int main ()
{
	char str1[] = "aU";
	char str2[] = "au";
	char str3[] = "au";
	char str4[] = "aU";
	char str5[] = "au";
	char str6[] = "au";
	printf("%d\n", strncmp(str1, str2, 2)); //egale aux 2 chaines
        printf("%d\n", strncmp(str3, str4, 0)); //plus petit
        printf("%d\n", strncmp(str5, str6, 3)); //plus grand
	printf("%d\n", strncmp(str1, str2, 2)); //egale aux 2 chaines
	printf("%d\n", strncmp(str3, str4, 0)); //plus petit
	printf("%d\n", strncmp(str5, str6, 3)); //plus grand
}*/
