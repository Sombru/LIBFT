/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:30:30 by pkostura          #+#    #+#             */
/*   Updated: 2023/09/14 18:01:55 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	c = (unsigned char)c;
	while (n && *ptr != c)
	{
		++ptr;
		--n;
	}
	if (n)
		return ((void *)ptr);
	else
		return (NULL);
}

// The function begins by declaring an unsigned character pointer ptr,
// which is used to traverse the memory block s. It's initialized to
// point to the start of the memory block.

// The c variable is cast to an unsigned character ((unsigned char)c).
// This is done to ensure that we compare characters as unsigned values.
// The character c is also treated as an integer (ASCII value) to be
// searched for in the memory block.

// The code enters a while loop that continues as long as there are
// bytes left to search (n is nonzero) and the current byte pointed
// to by ptr is not equal to c.

// Inside the loop, it checks whether the current byte pointed to by 
// ptr is equal to the character c. If they are equal, it means the
// character has been found in the memory block, and the loop exits.
// If they are not equal, the ptr pointer is incremented to move to
// the next byte in the memory block (++ptr), and n is decremented
// to track the remaining bytes to search (--n).

// After the loop exits, the code checks if there are still bytes
// left to search (n). If n is nonzero, it means that the character
// c was found in the memory block. In this case, the function returns
// a pointer to the byte where the character c was found. This pointer
// is cast to a void* to match the function's return type.

// If there are no bytes left to search (n is zero), it means the
// character c was not found within the specified number of bytes
// in the memory block. In this case, the function returns NULL to
// indicate that the character was not found.