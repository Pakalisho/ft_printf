/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmachuca <fmachuca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:15:43 by fmachuca          #+#    #+#             */
/*   Updated: 2024/03/25 19:30:48 by fmachuca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	ft_printstr(char *str)
{
	int	i;

	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	i = 0;
	while (str[i] != '\0')
		i++;
	write (1, str, i);
	return (i);
}

/* int main(void)
{
	char *str = "Suenan los tambores de la rebelión!\n";
	char *str2 = "";
	int a;
	a = ft_printstr(str);
	printf("%i\n", a);
	a = ft_printstr(str2);
	printf("%c", '\n');
	printf("%i\n", a);
} */