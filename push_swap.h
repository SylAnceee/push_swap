/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:13:07 by abreuil           #+#    #+#             */
/*   Updated: 2024/12/16 17:03:45 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h> 
# include <stdbool.h>

typedef struct s_stack_node
{
	int		nbr;
	int		index;
	int		push_cost;
	bool 	above_median;
	bool 	cheapest;

	struct s_stack_node	*next;
	struct s_stack_node	*prev;
	struct s_stack_node	*target_node;
}				t_stack_node;

// Handle errors

//Stack intiation
char 	**ft_split_diff(char *str, char c);
//Nodes initiation

//stack utils

//Commands
void	push(t_stack *src, t_stack *dst);
void 	pa(t_stack *a, t_stack *b);
void 	pb(t_stack *a, t_stack *b);
void 	swap(t_stack *stack);
void 	sa(t_stack *a);
void 	sb(t_stack *b);
void	rotate(t_stack *stack);
void 	ra(t_stack *a);
void 	rb(t_stack *b);
void 	rr(t_stack *a, t_stack *b);
void	reverse_rotate(t_stack *stack);
void 	rra(t_stack *a);
void 	rrb(t_stack *b);
void 	rrr(t_stack *a, t_stack *b);

//Algorithms
#endif
