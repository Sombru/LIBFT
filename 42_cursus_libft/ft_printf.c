/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkostura < pkostura@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:12:11 by pkostura          #+#    #+#             */
/*   Updated: 2023/11/18 15:26:56 by pkostura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>
#include <unistd.h>

int	my_printf(const char *format, ...);
int	printf_format(char specifier, va_list ap);
int	print_char(int c);
int	print_str(char *str);
int	print_digit(long n, int base);
int	print_digit_cap(long n, int base);

int main(void)
{
	int		count;
	char	*str;
	char	*vod = "sussy baka simulator";

	count = 5 + 6;
	str = "John";

	my_printf("Hello geys %s\n", str);
	printf("Hello geys %s\n", str);
	//digits
	my_printf("5 + 6 = %i\n", count);
	printf("5 + 6 = %i\n", count);
	//insigned
	my_printf("unsigned int -> %u\n", -46);
	printf("unsigned int  -> %u\n", -46);	
	//hex
	my_printf("hexidecimal of 11 -> %x\n", count);
	printf("hexidecimal of 11 -> %x\n", count);
	//print hex capital
	my_printf("hexidecimal of 12(CAP) -> %X\n", 12);
	printf("hexidecimal of 12(CAP) -> %X\n", 12);
	//print hex capital
	my_printf("print where poiner is stored -> %p\n", vod);
	printf("print where poiner is stored -> %p\n", vod);
	//print%
	my_printf("percent sign -> %%\n");
	printf("percent sign -> %%\n");
	return (0);
}

int	my_printf(const char *format, ...)
{
	int			count;
	va_list		ap;

	count = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			count += printf_format((*++format), ap);
			format++;
		}
		else
			count += write(1, format++, 1);
	}
	va_end(ap);
	return (count);
}

int	printf_format(char specifier, va_list ap)
{
	int		count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_str(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_digit((long)va_arg(ap, int), 10);
	else if (specifier == 'u')
		count += print_digit((long)va_arg(ap, unsigned int), 10);
	else if (specifier == 'p')
	{
		count += write(1, "0x", 2);
		count += print_digit((unsigned long)va_arg(ap, void *), 16);
	}
	else if (specifier == 'x')
		count += print_digit((long)va_arg(ap, unsigned int), 16);
	else if (specifier == 'X')
		count += print_digit_cap((long)va_arg(ap, unsigned int), 16);
	else if (specifier == '%')
		count += write(1, "%", 1);
	else
		count += write(1, &specifier, 1);
	return (count);
}

