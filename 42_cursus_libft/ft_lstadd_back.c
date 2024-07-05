/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:58:09 by pkostura          #+#    #+#             */
/*   Updated: 2023/09/14 16:05:48 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp -> next)
		tmp = tmp -> next;
	tmp -> next = new;
}

// The function begins by checking if the pointer to the head of the list, *lst,
// is NULL. If the list is empty (i.e., *lst is NULL), it means there are no
// elements in the list yet. In this case, the function sets *lst to point to
// the new element new, effectively making new the new head of the list, and 
// then returns. This handles the special case where the list is initially empty

// If the list is not empty (i.e., *lst is not NULL), the function enters a
// loop to find the last element in the list. It does this by initializing a
// temporary pointer tmp to point to the head of the list (*lst). Then, it uses
// a while loop to traverse the list by following the next pointers until it
// reaches the last element. Inside the loop, it keeps updating the tmp pointer
// to point to the next node until it finds the last node, which is the one
// where tmp->next is NULL.

// Once the tmp pointer points to the last element in the list, the function
// assigns the next pointer of this last element to point to the new element
// new. This effectively adds new as the new last element of the list.
