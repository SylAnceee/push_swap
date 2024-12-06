/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:13:07 by abreuil           #+#    #+#             */
/*   Updated: 2024/12/06 14:21:08 by abreuil          ###   ########.fr       */
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
	bool 	above;
	bool 	cheapest;

	struct s_stack_node	*next;
	struct s_stack_node	*prev;
	struct s_stack_node	*target_node;
}				t_stack_node;

// Handle errors

//Stack intiation

//Nodes initiation

//stack utils

//Commands
void	push(t_stack *src, t_stack *dst);
void 	pa(t_stack *a, t_stack *b);
void 	pb(t_stack *a, t_stack *b);

//Algorithms
#endif
