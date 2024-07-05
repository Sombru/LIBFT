/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:40:34 by pkostura          #+#    #+#             */
/*   Updated: 2023/09/14 17:22:55 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst -> content);
		lst = lst -> next;
	}
}

// The function starts by checking if the lst pointer (the head of the list)
// is not NULL. This is done in the while (lst) loop condition, which
// ensures that the loop will execute as long as there are nodes in the
// list to process.

// Inside the loop, the code calls the function f on the content of
// the current node using (*f)(lst->content). This step effectively
// applies the provided function f to the content of the current node.

// After applying the function to the current node, the code advances
// to the next node in the list by updating the lst pointer to point
// to the next node using lst = lst->next. This step moves the iteration
// forward to the next element in the list.

// The loop continues to iterate through the list, applying the
// function f to each element in turn, until it reaches the end
// of the list (i.e., when lst becomes NULL). At that point, the
// loop terminates, and the function has processed all nodes in the list.