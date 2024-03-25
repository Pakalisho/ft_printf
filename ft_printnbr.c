/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmachuca <fmachuca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:15:30 by fmachuca          #+#    #+#             */
/*   Updated: 2024/03/25 16:15:31 by fmachuca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

static int ft_intlen(int n)
{
	int i;
	
	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		
		if (n > 9)
		{
			n = n / 10;
			i++;
		}
		if (n <= 9)
		{
			n = n / n - 1;
			i++;
		}
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	if (n == 0)
		str[0] = 48;
	while (n != 0)
	{
			str[len - 1] = n % 10 + 48;
			n = n / 10;
			len--;			
	}
	return (str);
}

int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_printstr(num);
	free (num);
	return (len);
}

/* int main(void)
{
	int a = 5617;

	ft_printnbr(a);
} */