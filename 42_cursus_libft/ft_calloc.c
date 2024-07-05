/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:30:15 by pkostura          #+#    #+#             */
/*   Updated: 2023/09/15 17:39:39 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = nmemb * size;
	if (nmemb != 0 && total_size / nmemb != size)
	{
		return (NULL);
	}
	ptr = malloc (total_size);
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, total_size);
	}
	return (ptr);
}

// The function starts by calculating the total_size of memory required 
// for the allocation by multiplying the nmemb (number of elements) by 
// the size (size of each element). This gives the total number of bytes
//  needed for the array.

// The code then checks a condition to ensure that there's no integer 
// overflow during the multiplication. It does this by comparing
// total_size / nmemb to size. If total_size / nmemb is not equal to size,
// it means
// that the multiplication has overflowed, and the requested memory size
// is too large to be represented by the given data types. In this case,
// the function returns NULL to indicate an allocation failure.

// If the multiplication doesn't lead to overflow, the code proceeds
// to allocate memory using the malloc function. It allocates a block
// of memory of size total_size. If the allocation is successful
// (i.e., ptr is not NULL), it proceeds to the next step.

// Inside the allocation success branch, the code uses the ft_memset function
// (which presumably initializes memory with a specified value, typically zero)
// to set all the bytes in the allocated memory block to zero. This step ensures
// that the memory is properly initialized, as malloc may not guarantee that the
// memory is set to zero.

// Finally, the function returns the pointer ptr, which points to the allocated
// and zero-initialized memory block. The caller of this function can use this
// pointer to work with the allocated memory.