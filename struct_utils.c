/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbiais-l <tbiais-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/27 11:28:16 by tbiais-l          #+#    #+#             */
/*   Updated: 2026/11/27 15:53:22 by tbiais-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_node(int value)
{
	t_stack	*node;

	node->next = NULL;
	node->prev = NULL;
	node->value = value;
	return (node);
}

void	del_node(t_stack *node)
{
	node->next = NULL;
	node->prev = NULL;
	node->value = NULL;
	node = NULL;
}

void	add_front(t_stack *node, t_stack *lst)
{
	node->next = lst;
	lst->prev = node;
}

void	add_back(t_stack *node, t_stack *lst)
{
	last_node(lst)->next = node;
	node->prev = last_node(lst);
}

t_stack	*last_node(t_stack *lst)
{
	t_stack	*temp;

	temp = lst;
	while (temp->next)
		temp = temp->next;
	return (temp);
}
