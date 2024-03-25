/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmachuca <fmachuca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:15:25 by fmachuca          #+#    #+#             */
/*   Updated: 2024/03/25 16:15:26 by fmachuca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void ft_putchar_fd(char c, int fd)
{
	write (fd, &c, ft_strlen(&c));
}

static int ft_hexlen(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

static void	ft_puthex(unsigned int n, const char format)
{
	if (n >= 16)
	{
		ft_puthex(n /16, format);
		ft_puthex(n % 16, format);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((n - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((n -10 + 'A'), 1);
		}
	}
}

int	ft_printhex(unsigned int n, const char format)
{
	if (n == 0)
		return (write (1, "0", 1));
	else
		ft_puthex(n, format);
	return (ft_hexlen(n));
}

/* int main ()
{
	int a = 15;
	char format1 = 'x';
	char format2 = 'X';

	ft_printhex(a, format1);
	write (1, "\n", 1);
	ft_printhex(a, format2);
	write (1, "\n", 1);
	return (0);
} */