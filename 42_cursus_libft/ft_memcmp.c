/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:30:33 by pkostura          #+#    #+#             */
/*   Updated: 2023/09/14 18:07:35 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n && *d == *s)
	{
		++d;
		++s;
		--n;
	}
	if (n)
		return (*d - *s);
	else
		return (0);
}

// The function begins by declaring two pointers, d and s, as unsigned
// character pointers. These pointers will be used to traverse the memory
// blocks dest and src, respectively. They are initially set to point to
// the beginning of their respective memory blocks.

// Inside the while loop, the code checks two conditions to continue looping:

// n is nonzero: This condition ensures that there are still bytes to compare
// *d is equal to *s: This condition checks if the current bytes pointed
// to by d and s are equal.
// If both conditions are met, the loop continues, and the code compares
// the current bytes pointed to by d and s. If they are equal, it means
// the memory blocks are still equal at this position, so the pointers d
// and s are incremented to point to the next bytes in their respective
// memory blocks, and n is decremented to track the remaining bytes to compare.

// If the conditions in the loop are no longer met (either n becomes zero
// or *d is not equal to *s), the loop exits. At this point, one of the
// following conditions is true:

// The memory blocks are equal up to n bytes, and there
// are no more bytes to compare.
// The memory blocks are not equal, and the first differing bytes are found.
// After the loop exits, the code performs a final check:

// If n is nonzero, it means that the memory blocks are not equal
// (they differ). In this case, the function returns the difference
// between the values pointed to by d and s using the expression 
// (*d - *s). This indicates whether dest is less than or greater than
// src based on the ASCII values of the differing characters.
// If n is zero, it means that the memory blocks are equal up to the
// specified number of bytes, and the function returns 0 to indicate equality.