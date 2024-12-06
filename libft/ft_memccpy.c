/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:04:10 by abreuil           #+#    #+#             */
/*   Updated: 2024/08/29 17:16:12 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		cc;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	cc = (unsigned char)c;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == cc)
			return ((void *)d + i + 1);
		i++;
	}
	return (NULL);
}
