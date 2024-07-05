/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:41:26 by pkostura          #+#    #+#             */
/*   Updated: 2023/09/14 17:29:11 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

// The function begins by checking if the input pointer lst is NULL.
// If the list is empty (i.e., lst is NULL), there are no elements in
// the list, so the function returns NULL to indicate that there is no
// last element.

// If the input list is not empty (i.e., lst is not NULL), the function
// enters a while loop. This loop is used to traverse the list.

// Inside the loop, the code checks if the next pointer of the current
// node (lst->next) is not NULL. If it's not NULL, it means there is at
// least one more element in the list. Therefore, the code updates the
// lst pointer to point to the next node by using lst = lst->next.
// This step effectively moves the lst pointer to the next node in the list.

// The loop continues to iterate until the next pointer of the current
// node (lst->next) becomes NULL. This indicates that the current node
// is the last element in the list because there are no more nodes after it.

// Once the loop terminates, the lst pointer points to the last element
// in the list, and the function returns this pointer. This effectively
// provides a way to access the last node in the linked list.