/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:42:48 by pkostura          #+#    #+#             */
/*   Updated: 2023/09/14 16:22:36 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	*lst = new;
	new -> next = tmp;
}

// The function begins by checking if the pointer to the head of the list,
// *lst, is NULL. If the list is empty (i.e., *lst is NULL), it means there
// are no elements in the list yet. In this case, the function sets *lst to
// point to the new element new, effectively making new the new head of the
// list, and then returns. This handles the special case where the list is
// initially empty.

// If the list is not empty (i.e., *lst is not NULL), the function first
// stores the current head of the list (the element that *lst points to)
// in a temporary pointer tmp. This is done to avoid losing the reference
// to the rest of the list.

// Next, the function updates *lst to point to the new element new.
// This step makes new the new head of the list.

// Finally, the function updates the next pointer of the new element
// new to point to the previous head of the list, which is stored in
// tmp. This step connects new to the rest of the list.