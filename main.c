/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:12:19 by abreuil           #+#    #+#             */
/*   Updated: 2024/12/06 14:12:27 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;

	if (ac == 1 || ac == 2 && av[1][0])
		return (1);
	else if (ac == 2)
		av = ft_split_diff(av[1], ' ');
	init_stack_a(&a, av);
	if (!stack_sorted(a))
	{
		if (stack_size(a) == 2)
			sa(&a, false);
		else if (stack_size(a) == 3)
			sort_three(&a);
		else
			sort_stacks(&a, &b);
	}
	
	return (0);
}
