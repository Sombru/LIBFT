/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:39:17 by pkostura          #+#    #+#             */
/*   Updated: 2023/09/14 17:19:44 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst -> content);
	free(lst);
}

// The function begins by using the del function pointer to delete
// (or deallocate) the content of the node pointed to by lst.
// The (*del)(lst->content) line calls the del function, passing
// the content of the node as an argument. This is where you can
// specify a custom function to delete the content. The content is
// typically dynamically allocated memory that needs to be freed.

// After deleting the content, the code frees the memory associated
// with the node itself using free(lst). This releases the memory
// used by the node.

// Once the content is deleted and the node is freed, the function
// has effectively removed and deallocated the memory for the specified
// node. The node is no longer part of the linked list.