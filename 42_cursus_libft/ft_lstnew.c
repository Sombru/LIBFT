/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:02:23 by pkostura          #+#    #+#             */
/*   Updated: 2023/09/14 17:36:05 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}

// The function begins by declaring a pointer new of type t_list.
// This pointer will be used to create the new node.

// It allocates memory for the new node using the malloc function.
// The size of the allocated memory is determined by sizeof(t_list),
// which is the size of the t_list structure representing a node in
// the linked list. The result of malloc is cast to a t_list*
// and assigned to the new pointer.

// The code checks if the memory allocation was successful by
// testing if (!new). If new is NULL, it means that there was
// not enough memory available to create the new node.
// In this case, the function returns NULL to indicate an error.

// If the memory allocation was successful, the code proceeds to set
// the fields of the new node:

// new->content is set to the content argument passed to the function.
// This field holds a pointer to the data that you want to store in the
// node. Note that the content pointer is simply assigned; it is not
// copied. This means that the content pointer in the new node will
// point to the same data as the content argument.
// new->next is set to NULL. This field represents the pointer to the
// next node in the linked list. Since this node is being created as
// the last node in a new list (it's not linked to any other nodes yet),
// it's initialized to NULL.
// Finally, the function returns a pointer to the newly created node,
// which effectively represents the new node with the specified content.