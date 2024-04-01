/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmachuca <fmachuca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:15:39 by fmachuca          #+#    #+#             */
/*   Updated: 2024/03/25 19:52:31 by fmachuca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_fd(const char c, int fd)
{
	write (fd, &c, 1);
}

static int	ft_ptrlen(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

static void	ft_putptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_putptr((num / 16));
		ft_putptr((num % 16));
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + 48), 1);
		else
			ft_putchar_fd((num -10 + 97), 1);
	}
}

int	ft_printptr(const void *ptr)
{
	uintptr_t	addr;
	int			print_len;

	if (!ptr)
	{
		ft_printstr("(nil)");
		return (5);
	}
	addr = (uintptr_t)ptr;
	print_len = 0;
	print_len = print_len + write (1, "0x", 2);
	if (addr == 0)
		print_len = print_len + write (1, "0", 1);
	else
	{
		ft_putptr(addr);
		print_len = print_len + ft_ptrlen(addr);
	}
	return (print_len);
}

/* int main(void)
{
	int a = 42;
	int b = 0;

	ft_printptr(&a);
	write (1, "\n", 1);
	printf("%p\n", &a);

	ft_printptr(&b);
	write (1, "\n", 1);
	printf("%p\n", &b);
} */
