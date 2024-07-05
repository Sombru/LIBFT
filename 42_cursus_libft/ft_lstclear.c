/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:38:23 by pkostura          #+#    #+#             */
/*   Updated: 2023/09/15 17:39:26 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	head = *lst;
	while (head)
	{
		tmp = head -> next;
		(*del)(head -> content);
		free(head);
		head = tmp;
	}
	*lst = NULL;
}

// The function begins by declaring two pointers, head and tmp, of type
// t_list. head is used to traverse the list, and tmp is used to
// temporarily store the next node in the list.

// It then assigns the value of *lst (the pointer to the head of the list)
// to the head pointer. This allows the function to start traversing the
// list from the beginning.

// The code enters a while loop that continues as long as head is not NULL.
// This loop is responsible for iterating through each node in the list.

// Inside the loop, it first stores the next node (pointed to by head->next)
// in the tmp pointer. This step is crucial because after head is freed, we
// still need to access the next node in the list.

// The del function pointer is used to delete (or deallocate) the content of
// the current node. The (*del)(head->content) line calls the del function,
// passing the content of the current node as an argument. This is where you
// can specify a custom function to delete the content of each node. It could
// be a function you provide, or it could be a standard library function like
// free if the content is dynamically allocated memory.

// After deleting the content, the code frees the memory associated with the
// current node using free(head). This releases the memory used by
// the node itself.

// Finally, the head pointer is updated to point to the next node (tmp), and
// the loop continues to the next iteration to process the next node in
// the list.

// Once the loop has finished processing all nodes in the list
// (i.e., head becomes NULL), the function sets *lst (the pointer to
// the head of the list) to NULL, indicating that the list is now empty.