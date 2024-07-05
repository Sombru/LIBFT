/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:29:33 by pkostura          #+#    #+#             */
/*   Updated: 2023/09/14 17:32:40 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	head = NULL;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst -> content));
		if (!tmp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, tmp);
		lst = lst -> next;
	}
	return (head);
}
// The function starts by declaring two pointers of type t_list, head,
// and tmp. head will be used to keep track of the head of the new
// linked list, and tmp will be used to create new nodes.

// Initially, head is set to NULL, indicating that the new list is
// currently empty.

// The function enters a while loop that continues as long as the
// input linked list lst is not NULL. This loop is used to iterate
// through each element in the original list.

// Inside the loop, the code creates a new node tmp using the
// ft_lstnew function. The content of the new node is set to the
// result of applying the function f to the content of the current
// node in the original list: (*f)(lst->content). This effectively
// transforms the content of the original node using the provided
// function f.

// The code checks if the creation of the new node tmp was successful
// by testing if (!tmp). If the memory allocation for the new node
// fails (i.e., tmp is NULL), it means there's not enough memory to
// create the new node. In this case, the function performs cleanup
// by calling ft_lstclear(&head, del) to clear and deallocate any
// nodes that may have been created so far in the new list.
// Then it returns NULL to indicate an error.

// If the creation of the new node tmp is successful, the code
// adds the new node to the end of the new linked list head using
// the ft_lstadd_back function. This effectively builds the new
// list node by node.

// After adding the new node to the new list, the code updates
// the lst pointer to point to the next node in the original list,
// moving forward in the iteration.

// The loop continues until all nodes in the original 
// list have been processed.

// Finally, the function returns a pointer to the head 
// of the new linked list (head), which contains the 
// transformed content of the original list.