/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:44:39 by pkostura          #+#    #+#             */
/*   Updated: 2023/09/14 15:47:04 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = '\0';
}

// The function takes a pointer to a block of memory
//(void *s) as its first argument.
//Since it's declared as a void pointer, it can
//accept a pointer to any type of data.

// The function also takes the size of the memory block as its second
// argument, specified by size_t n. This argument determines how many
// bytes should be set to zero in the memory block.

// Inside the function, a local variable ptr is declared as an unsigned
// character pointer (unsigned char *). This pointer is initialized to
// point to the same memory location as the input pointer s. By using
// an unsigned character pointer, the code can manipulate the memory 
// one byte at a time.

// The function then enters a while loop that runs until n becomes
// zero. In each iteration of the loop, it does the following:

// It assigns the value '\0' (which is equivalent to zero) to the
// byte pointed to by ptr. This effectively sets the current byte to zero.
// It increments the ptr pointer to point to the next byte in memory.
// It decrements the n variable by 1 to keep track of the number of
// the bytes processed.

// The loop continues until all n bytes have been processed and set
// to zero. Once the loop completes, the entire block of memory
// pointed to by s has been zeroed out.