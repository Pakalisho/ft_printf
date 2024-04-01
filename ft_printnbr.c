/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmachuca <fmachuca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:15:30 by fmachuca          #+#    #+#             */
/*   Updated: 2024/03/26 13:49:52 by fmachuca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

static int	ft_intlen(int n)
{
	unsigned int	length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		length += 1;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	if (n == 0)
		str[0] = '0';
	str[len] = '\0';
	while (n != 0)
	{
		str[len - 1] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (str);
}

int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	if (n == -2147483648)
		return (ft_printstr("-2147483648"));
	num = ft_itoa(n);
	len = ft_printstr(num);
	free (num);
	return (len);
}

// int main(void)
// {
// 	int a = 5617;
// 	ft_printnbr(a);
// 	int b = INT_MAX;
// 	ft_printnbr(b);
// 	int c = INT_MIN;
// 	ft_printnbr(c);
// 	int e = -101;
// 	ft_printnbr(e);
// 	int f = 0;
// 	ft_printnbr(f);
// }