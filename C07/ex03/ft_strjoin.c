/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 07:11:56 by mfontain          #+#    #+#             */
/*   Updated: 2025/02/23 13:30:00 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != 0)
	{
		i++;
	}
	return(i);
}
int ft_total_len(**strs)
{	
	int nbr_sep;
	int strings_size;
	nbe_sep = ft_strlen(*strs) - 1; //size - 1 en fait
	while (strs[i])
	{
		strings_size += ft_strlen(strs[i]);
		i++;
	}
	return (string_size + nbr_sep);
}
char ft_strcat(*s1, *s2)
{
	int i;
	int j;
	i = 0;
	j = 0;
	while(s1[i] != '\0')
		i++;
	while(s2[j] != '\0')
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j]='\0';
	return (*s1);
}
char *ft_strjoin(int size, char **strs, char *sep);
{
	char *tab;
	int i;
	
	tab = (char *)malloc(ft_total_len(**strs) *sizeof(char))
	if (size == 0)
	{
		tab = (char *)malloc(0);	// sizeof(int) * size == 0
		if (!(tab))			// ?? free ici		
			return (NULL);
		free(tab);
	}
	i = 0;
	while(strs[i] != '\0')
	{
		ft_strcat(tab, strs[i])
		if ( i < size) 
		ft_strcat(tab, sep)
	}
}

int main()
{
	char tableau[][] = {"un","deux"},{"trois","quatre"};
	char coupe [] = " ";
	int taille = 3;

	printf("%s", ft_strjoin(taille, tableau, coupe));
}
