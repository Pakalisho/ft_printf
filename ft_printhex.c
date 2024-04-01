/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmachuca <fmachuca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:15:25 by fmachuca          #+#    #+#             */
/*   Updated: 2024/04/01 21:55:11 by fmachuca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

static int	ft_hexlen(unsigned int n)
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
	if (n < 16)
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((n - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((n - 10 + 'A'), 1);
		}
	}
	else
	{
		ft_puthex(n / 16, format);
		ft_puthex(n % 16, format);
	}
}

int	ft_printhex(unsigned int n, const char format)
{
	if (n == 0)
		return (write (1, "0", 1));
	ft_puthex(n, format);
	return (ft_hexlen(n));
}

int main(void)
{
	int a = 0;
	int b = 1;
	int c = 2;
	int d = 3;
	int e = 4;
	int f = 5;
	ft_printhex(a, 'x');
	printf("\n%x\n", b);
	ft_printhex(c, 'X');
	printf("\n%X\n", d);
	ft_printhex(e, 'X');
	write (1, "\n", 1);
	printf("%X", f);
	write (1, "\n", 1);

	int x0 = ft_printhex(-1, 'x');
	write (1, "\n", 1);
	int x1 = printf("%x", -1);
	write (1, "\n", 1);
	int x2 = ft_printhex(-1, 'X');
	write (1, "\n", 1);
	int x3 = printf("%X", -1);
	write (1, "\n", 1);

	write (1, "\n", 1);
	printf("%i\n", x0);
	printf("%i\n", x1);
	printf("%i\n", x2);
	printf("%i\n", x3);
}