/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:25:28 by abreuil           #+#    #+#             */
/*   Updated: 2024/08/05 15:01:05 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_bzero - Sets a block of memory to zero.
 * *s: Pointer to the block of memory to zero out.
 * n: Number of bytes to set to zero.
 *
 * This function takes a pointer to a memory block `s` and a size `n`,
 * and sets the first `n` bytes of the memory block to zero. It is 
 * equivalent to the standard library function memset with a zero value
 * and is commonly used to clear memory buffers.
 */

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n != 0)
	{
		*p++ = 0;
		n--;
	}
}
