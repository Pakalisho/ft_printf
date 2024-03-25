/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmachuca <fmachuca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:15:59 by fmachuca          #+#    #+#             */
/*   Updated: 2024/03/25 16:16:01 by fmachuca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>

int		ft_printchar(int c);
int		ft_printf(const char *str, ...);
int		ft_printhex(unsigned int n, const char format);
int		ft_printnbr(int n);
int		ft_printpercent(void);
int		ft_printptr(const void *ptr);
int		ft_printstr(char *str);
int		ft_printunsigned(unsigned int n);

char	*ft_uitoa(unsigned int n);

#endif
