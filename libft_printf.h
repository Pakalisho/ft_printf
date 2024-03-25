
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
