/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmachuca <fmachuca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:15:10 by fmachuca          #+#    #+#             */
/*   Updated: 2024/03/25 16:15:12 by fmachuca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int	ft_printchar(int c)
{	
	write(1, &c, 1);
	return (1);
}

/* int main ()
{
	int a = 'D';

	ft_printchar(a);
	return (0);
} */