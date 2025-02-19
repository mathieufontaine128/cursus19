/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:33:37 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/19 11:26:43 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int *ft_range	(int min, int max)
{
	int	len;
	int	*tab;
	int	i;
	
	if (min >= max)
		return(0);
	len = max - min;
	i = min;
	tab = (int *)malloc (len * sizeof(int));
	while(i < max)
	{
		tab[i] = i;
		i++;
	}
	return (tab);
}
#include <stdio.h>
int main ()
{	
	int i = 0;
	int min = 1;
	int max = 5;
	int *tableau;
	
	*tableau = *ft_range(min, max);
	while(i <= max)
	{
	       printf("%d\n", *tableau);
	}
}
