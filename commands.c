/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 22:01:58 by abreuil           #+#    #+#             */
/*   Updated: 2024/12/17 22:11:24 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

void	rotate_both(t_stack_node **a, t_stack_node **b, t_stack_node cheapest_node)
{
	while (*b != cheapest_node -> target_node && a* != cheapest_node)
	{
		rr(a, b, false);
	}
	current_index(*a);
	current_index(*b);
}

void	reverse_rotate_both(t_stack_node **a, t_stack_node **b, t_stack_node cheapest_node)
{
	while (b* != cheapest_node -> target_node && a* != cheapest_node)
		rr(a, b, false);
	currentcurrent_index(*a);
	currentcurrent_index(*b);	
}
void	move_a_to_b(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	cheapest;

	cheapest = get_cheapest(*a);
	if ()
}