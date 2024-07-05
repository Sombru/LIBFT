/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:39:27 by pkostura          #+#    #+#             */
/*   Updated: 2023/09/14 15:43:54 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	return (result * sign);
}

// Initialize three integer variables: i to keep track of the current
// character in the input string, sign to keep track of the sign of the
// integer (positive or negative), and result to store the final integer value.

// Use a while loop to skip any leading whitespace characters in the input
// string. The loop continues as long as str[i] is a space (' ') or falls
// within the ASCII code range of tab (9) to carriage return (13), which
// are also whitespace characters.

// Check if the current character (str[i]) is a plus ('+') or minus ('-')
// sign. If it's a '-', set the sign variable to -1 to indicate a negative
// number. Then, increment i to move past the sign character.

// Use another while loop to parse the digits of the number.
// This loop continues as long as str[i] is a digit ('0' to '9').
// Inside the loop, it converts the character to its corresponding
// integer value by subtracting the ASCII value of '0' and adds it to
// the result. Additionally, it multiplies the current result by 10 to shift
// the previous digits to the left to make room for the new digit.

// Finally, return the result of the conversion, multiplied by the sign
// variable to account for the sign of the integer.