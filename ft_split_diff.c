/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_diff.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:57:00 by abreuil           #+#    #+#             */
/*   Updated: 2024/12/11 19:03:04 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"q

int		is_separator(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

int		count_words(char *str, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!is_separator(str[i], c))
		{
			count++;
			while (str[i] && !is_separator(str[i], c))
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	*get_next_word(char *str, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && is_separator(str[i], c))
		i++;
	while (str[i] && !is_separator(str[i], c))
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !is_separator(str[i], c))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	ft_split_diff(char *str, char c)
{
	char	**tab;
	int		i;
	int		count;
	int		j;
	
	j = 0;
	i = 0;

}