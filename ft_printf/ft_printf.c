/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:26:41 by abreuil           #+#    #+#             */
/*   Updated: 2024/12/06 14:41:36 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <limits.h> 

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			count;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}

int main(void)
{
    int x = 42;
    void *ptr1 = &x;
    void *ptr2 = NULL;
	
    printf("Standard printf:   ptr1 = %p\n", ptr1);
    ft_printf("ft_printf:        ptr1 = %p\n", ptr1);

    printf("Standard printf:   ptr2 (NULL) = %p\n", ptr2);
    ft_printf("ft_printf:        ptr2 (NULL) = %p\n", ptr2);

    void *invalid_ptr = (void *)0xDEADBEEF;
    printf("Standard printf:   invalid_ptr = %p\n", invalid_ptr);
    ft_printf("ft_printf:        invalid_ptr = %p\n", invalid_ptr);

    return 0;
}