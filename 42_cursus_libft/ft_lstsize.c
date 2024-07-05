/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:26:56 by pkostura          #+#    #+#             */
/*   Updated: 2023/09/14 17:42:25 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst-> next;
		++i;
	}
	return (i);
}

// The function begins by declaring an integer variable i and initializing
// it to zero. This variable will be used to keep track of the number of
// elements in the linked list.

// The code enters a while loop that continues as long as the input linked
// list lst is not NULL. This loop is used to traverse the list and
// count the elements.

// Inside the loop, the code increments the i variable by 1 using the ++i
// expression. This effectively counts one more element in the list.

// The code then updates the lst pointer to point to the next node in
// the list using lst = lst->next. This step moves the iteration
// forward to the next element in the list.

// The loop continues to iterate until it reaches the end of the list,
// i.e., when lst becomes NULL.

// Once the loop terminates, the function returns the value
// of the integer variable i, which represents the number of elements
// in the linked list. This value reflects the count of nodes
// that were encountered during the traversal.