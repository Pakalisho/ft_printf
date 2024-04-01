/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmachuca <fmachuca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:15:18 by fmachuca          #+#    #+#             */
/*   Updated: 2024/03/25 19:14:21 by fmachuca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char format)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len = print_len + ft_printchar(va_arg(args, int));
	else if (format == 's')
		print_len = print_len + ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		print_len = print_len + ft_printptr(va_arg(args, const void *));
	else if (format == 'd' || format == 'i')
		print_len = print_len + ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		print_len = print_len + ft_printunsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_len = print_len + ft_printhex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_len = print_len + ft_printpercent();
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_len;

	i = 0;
	print_len = 0;
	va_start(args, str);
	if (str == NULL)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			print_len = print_len + ft_format(args, str[i + 1]);
			i++;
		}
		else
			print_len = print_len + ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_len);
}
