/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-17 11:21:50 by abreuil           #+#    #+#             */
/*   Updated: 2024-09-17 11:21:50 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_sep(char c, char *charset)
{
	while(*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int num_words(char *str, char *charset)
{
	size_t	wordcount;
	size_t	i;

	wordcount = 0;
	i = 0;
	while(str[i])
	{
		if (!is_sep(str[i], charset) && (i == 0 || is_sep(str[i - 1], charset)))
			wordcount++;
		i++;
	}
	return (wordcount);
}

char	**ft_strsplit(const char *s, char c)
{
	char	**tab;
	int	words;
	int	word;
	size_t	i;
	size_t	j;
	
	i = 0;
	word = 0;
	if(!s || !charset)
		return (NULL);
	words = num_words((char *)s, charset);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (is_sep(s[i], charset) == 0)
		{
			j = 0;
			while (s[i + j] && !is_sep(s[i + j], charset))
				j++;
			tab[word] = (char *)malloc(sizeof(char) * (j + 1));
			if (!tab[word])
				return (NULL);
			ft_strncpy(tab[word], (char *)&s[i], j);
			tab[word][j] = '\0';
			word++;
			i += j;
		}
		else
			i++;
	}
	tab[word] = NULL;
	return (tab);
}