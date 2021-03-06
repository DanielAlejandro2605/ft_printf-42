/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnieto-c <dnieto-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:02:10 by dnieto-c          #+#    #+#             */
/*   Updated: 2022/05/17 15:27:35 by dnieto-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		index_str;
	va_list	args_ptr;
	int		char_count;

	index_str = 0;
	char_count = 0;
	va_start(args_ptr, str);
	while (str && str[index_str])
	{
		if (str[index_str] == '%')
		{
			char_count += ft_get_format(args_ptr, str[index_str + 1]);
			index_str++;
		}
		else
			char_count += ft_putchar(str[index_str]);
		index_str++;
	}
	va_end(args_ptr);
	return (char_count);
}

int	ft_get_format(va_list args, const char format)
{
	int	length_print;

	length_print = 0;
	if (format == 'c')
		length_print += ft_putchar(va_arg(args, int));
	else if (format == 'p')
		length_print += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 's')
		length_print += ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		length_print += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		length_print += ft_put_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		length_print += ft_puthex(va_arg(args, unsigned int), format);
	else if (format == '%')
		length_print += ft_putchar('%');
	return (length_print);
}

#include <stdio.h>

int main(void)
{
	int return_value;

	return_value = printf("Hola\n");
	printf("%d %c\n", return_value, '4');
}