/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 22:01:58 by abreuil           #+#    #+#             */
/*   Updated: 2024/12/18 11:51:42 by abreuil          ###   ########.fr       */
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
	current_index(*a);
	current_index(*b);	
}
void	move_a_to_b(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	cheapest;

	cheapest = get_cheapest(*a);
	if (cheapest -> above_median && cheapest -> target_node -> above_median)
	{
		rotate_both(a, b, cheapest);
	}
	else if (!(cheapest -> above_median) && !(cheapest -> target_node -> above_median))
	{
		reverse_rotate_both(a, b, cheapest)
	}
	prep_for_push(a, cheapest, 'a');
	prep_for_push(b, cheapest -> target_node, 'a');
	pb(b, a, false);
}

void	move_b_to_a(t_stack_node **a, t_stack_node **b, t_stack_node cheapest_node)
{
	prep_for_push(a, b -> target_node, 'a');
	pa(a, b, false);
}

void	min_to_top(t_stack_node **a)
{
	while (*a != find_min(a))
	{
		if (*a -> above_median)
			ra(a, false);
		else
			rra(a, false);
	}
}

void	sort_stacks(t_stack_node **a, t_stack_node **b)
{
	int	len_a;
	
	len_a = stack_size(a);
	if (len_a > 3 && !stack_sorted(*a))
	{
		pb(b, a, false);
		len_a--;
	}
	if (len_a > 3 && !stack_sorted(*a))
	{
		pb(b, a, false);
		len_a--;
	}
	while (len_a > 3 && !stack_sorted(*a))
	{
		init_nodes_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_nodes_b(*a, *b);
		move_b_to_a(a, b);
	}
	current_index(*a);
	min_to_top(a);
}